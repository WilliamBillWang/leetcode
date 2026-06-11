using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    static int missingNumber(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(),nums.end());
        int missing_num = -1;
        if(nums[0] != 0) return 0;
        for(int i =0 ; i < size-1; i++){
            if(abs(nums[i]-nums[i+1]) != 1){
                missing_num =  i+1;
                break;
            }
        }
        if(missing_num == -1) return size;
        return missing_num;
    }
};

int main(){
    vector<int> arr = {0,1};
    Solution::missingNumber(arr);
}