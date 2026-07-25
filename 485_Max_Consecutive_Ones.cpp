using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int ma = INT_MIN;
        for(int i =0; i < nums.size() ; i++){
            if(nums[i] == 0){
                ma = max(count, ma);
                count = 0;
            } 
            else if(i == nums.size() - 1){
                count ++;
                ma = max(count, ma);
            }
            else {
                count ++;
            }
        }
        return ma;
    }
};


class Solution { //simplify
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int count = 0;

        for (int x : nums) {
            if (x == 1)
                count++;
            else
                count = 0;

            ans = max(ans, count);
        }

        return ans;
    }
};

int main(){
    Solution solution;
    vector<int> nums = {1,1,0,1,1,1};
    solution.findMaxConsecutiveOnes(nums);
}