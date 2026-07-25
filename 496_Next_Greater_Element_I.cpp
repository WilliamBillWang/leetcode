using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp2;
        for(int i =0; i< nums2.size(); i++){
            mp2[nums2[i]] = i;
        }
        vector<int> ans;
        int index = 0;

        for(int x : nums1) {
            index = mp2[x];
            bool find = false;
            
            while(index < nums2.size()){
                if(nums2[index] > x){
                    find = true;
                    ans.push_back(nums2[index]);
                    break;
                }
                index ++;
            } 
            if(!find) ans.push_back(-1);
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         unordered_map<int,int> mp2;
//         int max = INT_MIN;
//         int index = 0;
//         for(int i =0; i< nums2.size(); i++){
//             if(nums2[i] > max){
//                 max = nums2[i];
//                 index = i;
//             }
//             mp2[nums2[i]] = i;
//         }
//         vector<int> ans;
//         for(int x : nums1) {
//             if(mp2[x] < index) ans.push_back(max);
//             else ans.push_back(-1);
//         }
//         return ans;
//     }
// };

int main(){
    Solution solution;
    vector<int> nums1 = {4,1,2} ;
    vector<int> nums2 = {1,3,4,2};
    solution.nextGreaterElement(nums1 ,nums2);
}