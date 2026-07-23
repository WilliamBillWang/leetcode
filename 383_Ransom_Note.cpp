using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        for(int i =0; i< magazine.size() ; i ++){
            mp[magazine[i]] ++;
        }
        for(char x : ransomNote){
            if(mp.find(x) != mp.end() && mp[x] != 0) mp[x] --;
            else
            return false;
        }
        return true;
    }
};

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int cnt[26] = {};

        for (char c : magazine)
            cnt[c - 'a']++;

        for (char c : ransomNote) {
            if (--cnt[c - 'a'] < 0)
                return false;
        }

        return true;
    }
};
int main(){
    Solution solution;
    string ransomNote = "aa";
    string magazine = "aab";
    solution.canConstruct(ransomNote, magazine);
}