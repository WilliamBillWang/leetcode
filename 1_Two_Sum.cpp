using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //     map<int,int> mp;
    //     for(int i =0 ; i< nums.size(); i++){
    //         mp[nums[i]] = i;
    //     }
    //     sort(nums.begin(),nums.end());
    //     int l = 0 ,r = nums.size()-1;
    //     int total = nums[l] + nums[r];

    //     while(total != target){
    //         if(total > target){
    //             total -= nums[r];
    //             total += nums[--r];
    //         }
    //         else{
    //             total -= nums[l];
    //             total += nums[++l];
    //         }
    //     }

    // cout << mp[nums[l]] << " " << mp[nums[r]];
    //     if(nums[l] == nums[r]) return {mp[nums[l]]--,mp[nums[r]]};
    //     return {mp[nums[l]],mp[nums[r]]};
    // }
    vector<pair<int,int>> arr(nums.size());
    
    for(int i = 0 ; i<nums.size();i ++){
        arr[i].first = nums[i];
        arr[i].second = i;
    }
    sort(arr.begin(),arr.end());
    int l = 0 ,r = nums.size()-1;
    int total = arr[l].first + arr[r].first;

    while(total != target){
        if(total > target){
            total -= arr[r].first;
            total += arr[--r].first;
        }
        else{
            total -= arr[l].first;
            total += arr[++l].first;
        }
    }
    cout << arr[l].second << " " << arr[r].second;
    return {arr[l].second,arr[r].second};
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            if(mp.find(need) != mp.end()) {
                return {mp[need], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
int main(){
    Solution solution;
    vector<int> nums = {3,2,4};
    int target = 6;
    solution.twoSum(nums,target);
}