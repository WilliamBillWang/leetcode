using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> sorted;
        for(int i =0 ; i< m ; i++) sorted.push_back(nums1[i]);
        for(auto x : nums2) sorted.push_back(x);
        sort(sorted.begin(),sorted.end());
        for(int i = 0; i< m + n ; i++) nums1[i] = sorted[i];
    }
};

class Solution2 {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i1 = m -1;
        int i2 = n - 1;
        int place = m + n - 1;
        while(i1>=0 && i2 >= 0){
            if(nums1[i1] < nums2[i2]){
                nums1[place] = nums2[i2];
                i2 --;
            }
            else if(nums1[i1] >= nums2[i2]){
                nums1[place] = nums1[i1];
                i1--;
            }
            place --;
        }
        while(i2 >= 0){
            nums1[place] = nums2[i2];
            place --;
            i2 --;
        }
    }  
};

int main(){
    Solution2 solution;
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6};
    int n = 3;
    solution.merge(nums1,m,nums2,n);
}