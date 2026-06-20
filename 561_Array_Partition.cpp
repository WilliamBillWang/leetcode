using namespace std;
#include<bits/stdc++.h>
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int total = 0;
        for(int i =0; i < nums.size(); i += 2){
            total += nums[i];
        }
        // cout << total;
        return total;
    }
};
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {

        vector<int> bucket(20001, 0);

        for(int x : nums){
            bucket[x + 10000]++;
        }

        int res = 0;
        bool flag = true;

        for(int i = 0; i < 20001; i++){

            while(bucket[i] > 0){

                if(flag){
                    res += i - 10000;
                }

                flag = !flag;
                bucket[i]--;
            }
        }

        return res;
    }
};

int main(){
    Solution solution;
    vector<int> nums = {6,2,6,5,1,2};
    solution.arrayPairSum(nums);
}