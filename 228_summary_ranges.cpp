using namespace std;
#include<bits/stdc++.h>
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int j = i;

            while (j + 1 < n && (long long)nums[j + 1] -nums[j] ==  1) {
                j++;
            }

            if (j == i) {
                ans.push_back(to_string(nums[i]));
            } else {
                ans.push_back(to_string(nums[i]) + "->" + to_string(nums[j]));
            }
            i = j;
        }

        return ans;
    }
};

int main(){
    Solution solution;
    vector<int> nums = {0,1,2,4,5,7};
    solution.summaryRanges(nums);

}