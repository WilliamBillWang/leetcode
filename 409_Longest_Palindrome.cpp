using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(auto x : s) mp[x]++;
        int ans = 0;
        bool add = false;
        for(auto i : mp){
            if(i.second >= 2 || i.second % 2 == 0){
                ans += (i.second / 2) * 2;
                i.second = i.second % 2;
                if(i.second == 1) add = true;
            }
            else{
                add = true;
            }
        }
        if(add) ans += 1;
        return ans;
    }
};


int longestPalindrome(string s) {
    unordered_map<char,int> mp;

    for(char c : s)
        mp[c]++;

    int ans = 0;
    bool odd = false;
            //key value
    for(auto [c, cnt] : mp){
        ans += cnt / 2 * 2;
        if(cnt % 2)
            odd = true;
    }

    return ans + odd;
}
int main(){
    Solution solution;
    string s = "ccc";
    solution.longestPalindrome(s);
}