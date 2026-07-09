using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0;
        while(l < nums.size()){
            if(nums[l] == 0){
                for(int i = l; i< nums.size(); i++){
                    if(nums[i] != 0){
                        swap(nums[l],nums[i]);
                        break;
                    }
                }
            }
            l++;
            
        }

    }
};

class Solution2 {
public:
    void moveZeroes(vector<int>& nums) {

        int k = 0;

        for(int num : nums){

            if(num != 0){
                nums[k++] = num;
            }
        }

        while(k < nums.size()){
            nums[k++] = 0;
        }
    }
};


int main(){
    Solution2 solution;
    vector<int> nums = {0,1,0,3,12};
    solution.moveZeroes(nums);
}