using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;
        for(int i = 0; i < s.size() ; i++){
            for(auto x : mp){
                if(s[i] != x.first && x.second == t[i]){
                    return false;
                }
                else continue;
            }
            mp[s[i]] = t[i]; 
        }
        for(int i =0; i< s.size() ; i++){
            s[i] = mp[s[i]];
        }
        if(s == t) return true;
        return false;
    }
};

int main(){
    Solution solution;
    string s = "badc", t = "baba";
    solution.isIsomorphic(s,t);
}