using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        for(int i = 0;i < s.size();i ++){
            mp[s[i]] ++;
        }
        char ans;
        for(int i = 0; i< s.size(); i ++){
            if(mp[s[i]] == 1){
                ans = s[i];
                return i;
                break;
            }
        }
        return -1;
    }
};

class Solution {
public:
    int firstUniqChar(string s) {
        int cnt[26] = {};

        for(char c : s)
            cnt[c - 'a']++;

        for(int i = 0; i < s.size(); i++){
            if(cnt[s[i] - 'a'] == 1)
                return i;
        }

        return -1;
    }
};

int main(){
    Solution solution;
    string s =  "leetcode";
    solution.firstUniqChar(s);
}