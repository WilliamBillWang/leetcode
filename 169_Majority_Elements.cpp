using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i =0; i< nums.size(); i ++){
            mp[nums[i]] ++;
        }
        int ma = -1;
        int ans = 0;
        for(auto x : mp){
            if(x.second > ma) {
                ma = x.second;
                ans = x.first;
            }
        }
        return ans;
    }
};

int main(){
    Solution solution;
    vector<int> nums = {2,2,1,1,1,2,2};
    solution.majorityElement(nums);
}