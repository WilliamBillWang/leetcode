using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return (s == t);
    }
};

class Solution2{
  public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mps;
        unordered_map<char,int> mpt;
        for(auto x:s){
            mps[x] ++;
        }
        for(auto y:t){
            mpt[y] ++;
        }

        for(auto x:mps){
            if(mpt[x.first] != x.second) return false;
        }
        for(auto x:mpt){
            if(mps[x.first] != x.second) return false;
        }
        return true;
    }
};

int main(){
    Solution2 solution;
    string s = "a",t = "nagaram";
    solution.isAnagram(s,t);
}