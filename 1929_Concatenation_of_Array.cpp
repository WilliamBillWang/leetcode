using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        for(int i =0 ; i< n; i ++){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};

class Solution2 {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(2 * n);

        for(int i = 0; i < 2 * n; i++){
            ans[i] = nums[i % n];
        }

        return ans;
    }
};


int main(){
    Solution solution;
    vector<int> nums = {1,3,2,1};
    solution.getConcatenation(nums);
}