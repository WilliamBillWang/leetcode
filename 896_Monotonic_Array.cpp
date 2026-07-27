using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increment = true;
        for(int i = 1; i< nums.size(); i++){
            if(nums[i] - nums[i -1] < 0) increment = false;
        }
        if(increment){
            for(int i = 1; i< nums.size() ; i++){
                if(nums[i] - nums[i - 1] < 0) return false;
            }
        }
        else{
            for(int i = 1; i < nums.size() ; i ++){
                if(nums[i] - nums[i - 1] > 0) return false;
            }
        }
        return true;
    }
};

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return true;

        bool isInc = true;
        bool isDec = true;

        for (int i = 1; i < n; i++) {
            if (!isInc && !isDec) {
                return false;
            }

            if (nums[i] < nums[i - 1]) {
                isInc = false;
            }
            if (nums[i] > nums[i - 1]) {
                isDec = false;
            }
        }

        return isInc || isDec;        
    }
};

int main(){
    Solution solution;
    vector<int> nums = {1,2,2,3};
    solution.isMonotonic(nums);
}