#include <iostream>
#include <string>
#include <vector>
using namespace std;


class HashTable {
    int bucket_num;
    vector<string> key;
    vector<int> value;
    public:
    HashTable(int V);
    void insertItem(string s, int v);
    void deleteItem(string s);
    int hashFunc(string s){
        int res = 0;
        for (char c:s){
            res += (int)c;
        }
        return res%bucket_num;
    }
    void displayHash();
};

HashTable::HashTable(int b){
    this->bucket_num = b;
    this->key.reserve(b);
    this->value.reserve(b);
}

void HashTable::deleteItem(string s){
    int index = hashFunc(s);
    cout << "test" <<endl;
    if(!this->key[index].empty()){
        cout << "well" << endl;
        key[index].clear();
        value[index] = -1;
    }
}

void HashTable::insertItem(string s, int v){
    
    int index = hashFunc(s);
    cout << index << endl;
    if(!this->key[index].empty()){
        cout << "Just collide!" << endl;
    }
    this->key[index] = s;
    this->value[index] = v;

}

void HashTable::displayHash(){
    cout << "****** Show Hash Table ******"<<endl;
    for (int i = 0; i<this->bucket_num;i++){
        if(!this->key[i].empty()){
        cout << this->key[i] << " ";
        }
    }
    cout << endl;
    for (int i = 0; i<this->bucket_num;i++){
        if(!this->key[i].empty()){
        cout << this->value[i] << " ";
        }
    }
    cout << endl;
    cout << "****** Finish Hash Table ******"<<endl;
}

int main(){
    
    HashTable h(10);
    
    h.insertItem("apple", 10);
    h.insertItem("apple", 10);
    h.insertItem("banana", 100);
    
    h.displayHash();

    h.deleteItem("apple");

    h.displayHash();


    return 0;
}