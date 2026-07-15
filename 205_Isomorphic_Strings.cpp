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

class Solution2 {
public:
    bool isIsomorphic(string s, string t) {
        vector<char> s_to_t(128,0);
        vector<char> t_to_s(128,0);

        for(int i =0; i< s.size() ;i ++){
            char ch1 = s[i];
            char ch2 = t[i];

            if(s_to_t[ch1] && s_to_t[ch1] != ch2) return false;
            if(t_to_s[ch2] && t_to_s[ch2] != ch1) return false;

            s_to_t[ch1] = ch2;
            t_to_s[ch2] = ch1;
        }
        return true;
    }
};

int main(){
    Solution2 solution;
    string s = "egg", t = "add";
    solution.isIsomorphic(s,t);
}