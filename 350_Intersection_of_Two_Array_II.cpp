using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        
        for(int i = 0; i< nums1.size(); i ++) mp1[nums1[i]] ++;
        for(int i = 0; i< nums2.size(); i ++) mp2[nums2[i]] ++;

        vector<int> ans;
        if(nums1.size() > nums2.size()) swap(mp1,mp2);
        for(auto x : mp1){
            if(mp2.find(x.first) != mp2.end()){
                int push_times = min(x.second,mp2[x.first]);
                while(push_times) {
                    ans.push_back(x.first);
                    push_times--;
                }
            }
        }

        // for(int i = 0; i < n; i ++){
        //     if((mp1.find(nums1[i]) != mp1.end()) && (mp2.find(nums1[i]) != mp2.end())){
        //         int push_times = min(mp1[nums1[i]],mp2[nums2[i]]);
        //         while(push_times) {
        //             ans.push_back(nums1[i]);
        //             push_times--;
        //         }
        //     }
        // }
        
        return ans;
    }
};

int main(){
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};
    Solution solution;
    solution.intersect(nums1,nums2);

}