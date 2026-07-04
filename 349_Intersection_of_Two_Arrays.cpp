using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        for(int i = 0; i< nums1.size(); i++){
            mp[nums1[i]] ++;
        }
        vector<int> ans;
        unordered_set<int> st;
        for(auto x:nums2){
            st.insert(x);
        }
        for(auto x:st){
            if(mp[x] > 0) ans.push_back(x);
        }
        return ans;
    }
};

class Solution2 { // Using sorting and two pointers.
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0, j = 0;
        vector<int> ans;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                if (ans.empty() || ans.back() != nums1[i])
                    ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j])
                i++;
            else
                j++;
        }
        return ans;
    }
};
class Solution3 { //iterate the smallest vector.
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size())
            swap(nums1, nums2);

        unordered_set<int> st(nums1.begin(), nums1.end());
        unordered_set<int> ans;

        for (int x : nums2)
            if (st.count(x))
                ans.insert(x);

        return vector<int>(ans.begin(), ans.end());
    }
};


int main(){
    Solution solution;
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};
    solution.intersection(nums1,nums2);
}