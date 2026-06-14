using namespace std;
#include<bits/stdc++.h>

class NumArray {
private:
    vector<int> arr;
public:
    NumArray(vector<int>& nums) {
        arr.resize(nums.size());
        arr[0] = nums[0];
        for(int i =1 ; i < nums.size(); i++){
            arr[i] = arr[i-1] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left != 0){
            cout << arr[right] - arr[left-1];
        }
        else{
            cout << arr[right];
        }
    }
};


int main(){
    vector<int> arr = {-2,0,3,-5,2,-1};
    NumArray numarray(arr);
    int left = 0;
    int right = 5;
    numarray.sumRange(left,right);
}