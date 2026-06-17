#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i =0; i< nums.size() -1;i += 2){
        //     if(nums[i] != nums[i+1]){
        //         return nums[i];
        //     }
        // }
        // return nums[nums.size()-1];
        map<int,int> mp;
        for(int i =0; i< nums.size(); i++){
            mp[nums[i]] ++;
        }
        for(const auto& p:mp){
            if(p.second ==1) {
                return p.first;
            }
        }
    }
};

int main(){
    Solution solution;
    vector<int> arr = {2,2,1};
    int find = solution.singleNumber(arr);
    cout << find;
}