#include <vector>
#include <iostream>
using namespace std;

vector<int> merge_sorted_arrays(vector<int>& nums1, vector<int>& nums2) {
    //index of nums1 and nums2
    int i = 0;
    int j = 0;
    vector<int> res;
    while(i<nums1.size() || j < nums2.size()){
        //Commented is some more detailed if-elseif, actually the same thing
        /*if(i >= nums1.size()){
            res.push_back(nums2[j]);
            j++;
        }
        else if (j >= nums2.size()){
            res.push_back(nums1[i]);
            i++;
        }
        else if(nums1[i] < nums2[j]){
            res.push_back(nums1[i]);
            i++;
        }
        else if (nums1[i] >= nums2[j]){
            res.push_back(nums2[j]);
            j++;
        }*/
        if(i >= nums1.size() || nums1[i] >= nums2[j]){
            res.push_back(nums2[j]);
            j++;
        }
        else {
            res.push_back(nums1[i]);
            i++;
        }
    }
    return res;
}

//test
int main(){
    vector<int> v1;
    int a[] = { 1, 3, 5 };
    v1.assign(a, a + 3);

    vector<int> v2;
    int b[] = { 2, 4, 6 };
    v2.assign(b, b + 3);

    for(int num:merge_sorted_arrays(v1, v2))
    cout << num << " ";
    cout << endl;
    
}
