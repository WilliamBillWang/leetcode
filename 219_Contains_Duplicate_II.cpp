using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1 ; j< i + k && j < nums.size(); j ++){
                if(nums[i]== nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i =0; i< nums.size() ; i++){
            if(mp.count(nums[i])){
                if(i - mp[nums[i]] <= k) return true;
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};


// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         unordered_map<int, int> mp;

//         for (int i = 0; i < nums.size(); i++) {
//             if (mp.count(nums[i])) {
//                 if (i - mp[nums[i]] <= k)
//                     return true;
//             }

//             mp[nums[i]] = i;
//         }

//         return false;
//     }
// };

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> st;
        for(int i =0; i< nums.size() ; i ++){
            if(st.count(nums[i])) return true;
            st.insert(nums[i]);

           if(st.size() > k) st.erase(nums[i - k]);
        }
        return false;
    }
};






// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         unordered_set<int> window;

//         for (int i = 0; i < nums.size(); i++) {
//             if (window.count(nums[i]))
//                 return true;

//             window.insert(nums[i]);

//             if (window.size() > k)
//                 window.erase(nums[i - k]);
//         }

//         return false;
//     }
// };






int main(){
    Solution solution;
    vector<int> nums = {1,2,3,1};
    int k = 3;
    solution.containsNearbyDuplicate(nums,k);
}