#include <string>
#include <iostream>
using namespace std;

string reverse_string(string s) {
    char tempc;
    for(int i = 0; i<s.size()/2; i++){
        tempc = s[i];
        s[i] = s[s.size()-1-i];
        s[s.size()-1-i] = tempc;
    }
    return s;
}

//test
int main(){
    string teststring = "abcdef";

    cout << teststring << endl;
    cout << reverse_string(teststring) << endl;
    
}
