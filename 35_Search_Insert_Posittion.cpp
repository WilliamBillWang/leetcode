using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i =0; i< nums.size(); i++){
            if(nums[i] == target){
                // cout << i;
                return i;
            }
            else if(nums[i] > target){
                // cout << i;
                return i;
            }
        }
        // cout << nums.size();
        return nums.size();

    }
};
class Solution2 {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    }
};

int main(){
    Solution solution;
    vector<int> nums = {1,3,5,6};
    int target = 7;
    solution.searchInsert(nums,target);
    return 0;
}