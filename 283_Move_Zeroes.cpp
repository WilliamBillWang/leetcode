using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0;
        int r = nums.size()-1;
        while(r > 0){
            if(nums[l] == 0 && nums[r] == 0){
                l++;
                r--;
            }
            else if(nums[l] == 0 && nums[r] != 0){
                swap(nums[l],nums[r]);
                l++;
                r--;
            }
            else{
                l++;
            }
        }
    }
};


int main(){
    Solution solution;
    vector<int> nums = {0,1,0,3,12};
    solution.moveZeroes(nums);
}