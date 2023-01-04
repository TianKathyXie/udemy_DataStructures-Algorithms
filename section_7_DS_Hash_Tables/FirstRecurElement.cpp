#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

//I tried to solve it using exclusive OR, but it didn't work...

int FirstRecurElement(vector<int> &nums){
    unordered_set<int> num_set;
    for (int num:nums){
        if(!num_set.insert(num).second)
        return num;
    }
    int *res = nullptr;
    return *res; //return nullptr when there is no recur

}

int main(){
    int arr[] = { 50, 20, 30, 10, 40, 50, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    vector<int> vect(arr, arr + n);
    
    int res = FirstRecurElement(vect);
    cout << res << endl;
    return 0;
}