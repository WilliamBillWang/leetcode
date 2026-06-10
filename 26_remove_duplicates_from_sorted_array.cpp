#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    static int removeDuplicates(vector<int>& nums){
        if(nums.empty()) return 0;
        int left = 0;
        for(int right =1; right< nums.size(); right++){
            if(nums[right] != nums[left]){
                left++;
                nums[left] = nums[right];
            }
        }
        for(int i = 0; i< nums.size(); i ++){
            cout << nums[i] << " ";
        }
        cout <<"\n" <<++left;
        return left;
    }
};
int main(){
    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
    // for(int i = 0; i< arr.size(); i ++){
    //         cout << arr[i] << " ";
    // }
    Solution::removeDuplicates(arr);
}
