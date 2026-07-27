using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg = 0;
        for(int i =0; i< nums.size() ; i++){
            if(nums[i] < 0) neg ++;
            if(nums[i] == 0) return 0;
        }
        if(neg%2 == 0) return 1;
        return -1;
    }
};

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign = 1; 
        for (int n : nums) {
            if (n == 0) {
                return 0; 
            } 
			if (n < 0) {
                sign = -sign; 
            }
        }
        return sign;
    }
};
int main(){
    Solution solution;
    vector<int> nums = {-1,-2,-3,-4,3,2,1};
    solution.arraySign(nums);
}