using namespace std;
#include<bits/stdc++.h>

class Solution { // Hash table
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        int range = nums.size();
        for(int i = range -1; i>= 0; i --){
            mp[nums[i]] ++;
            nums.pop_back();
        }
        for(int i = 1; i<= range; i++){
            if(mp[i] == 0){
                nums.push_back(i);
            } 
        }
        return nums;
    }
};


class Solution2 { // mark number to be negative
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int idx = abs(nums[i]) - 1;
            if (nums[idx] > 0) {
                nums[idx] = -nums[idx];
            }
        }

        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                res.push_back(i + 1);
            }
        }

        return res;
    }
};
class Solution3 { //cyclic sort
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            while (nums[i] != nums[nums[i] - 1]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }

        vector<int> res;
        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                res.push_back(i + 1);
            }
        }

        return res;
    }
};

int main(){
    Solution3 solution;
    vector<int> nums = {4,3,2,7,8,2,3,1};
    solution.findDisappearedNumbers(nums);
}