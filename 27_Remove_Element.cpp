using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i =0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++; 
            }
        }
        // auto it = find(nums.begin(),nums.end(),val);
        // while(it != nums.end()){
        //     it = find(nums.begin(),nums.end(),val);
        //     nums.erase(it);
        // }
        
        // while(l < r){ 
        //     while(r>=0 && nums[r] == val) r--;
        //     if(nums[l] == val ) swap(nums[l],nums[r]);
        //     l++;
        // }
        // if(nums[0] == val) return 0;
        // cout << r + 1;
        // for(auto x:nums){
        //     cout << x << " ";
        // }
        // cout << "\n";
        // cout << nums.size();
        // cout << r--;
        return k;
    }
};

int main(){
    Solution solution;
    vector<int> nums = {2,1};
    int val = 2;
    solution.removeElement(nums,val);
}