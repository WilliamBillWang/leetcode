using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> sorted;
        for(int i =0 ; i< m ; i++) sorted.push_back(nums1[i]);
        for(auto x : nums2) sorted.push_back(x);
        sort(sorted.begin(),sorted.end());
        for(int i = 0; i< m + n ; i++){
            nums1[i] = sorted[i];
        }
        
    }
};

int main(){
    Solution solution;
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6};
    int n = 3;
    solution.merge(num1,m,nums2,n);
}