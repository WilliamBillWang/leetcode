using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i =0; i< nums.size(); i ++){
            if(mp[nums[i]] == 1) return true;
            mp[nums[i]] ++;
        }
        for(auto x : mp){
            if(x.second >= 2) return true;
        }
        return false;
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int num : nums){
            if(st.count(num)) return true;
            st.insert(num);
        }
        return false;
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i =1;i < nums.size(); i++){
            if(nums[i] == nums[i-1]) return true;
        }
        return false;
    }
};

int main(){
    Solution solution;
    vector<int> nums = {1,2,3,1} ;
    solution.containsDuplicate(nums);
}