using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = INT_MAX;
        int index = 0;
        for(int i = 0 ;i < strs.size() ; i ++){
            if(n > strs[i].size()){
                n = strs[i].size();
                index = i;
            }
        }
        bool con = true;
        int p = 0;
        string ans = "";
        while(true){
            if(n == 0) return "";
            char ch = strs[index][p];
            for(int i = 0; i < strs.size(); i++){
                if(strs[i][p] != ch){
                    con = false;
                    return ans;
                }
            }
            ans += ch;
            p++;
            if(p == n) return ans;
        }
        return ans;
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string s = "";
        int i = 0, length = strs.size();
        while (i < strs[0].length()){
            if (strs[0][i] == strs[length-1][i])
                s += strs[0][i];
            else
                break;
            i++;
        }
        return s;
    }
};

int main(){
    Solution solution;
    vector<string> strs = {"flower","flower","flower","flower"};
    solution.longestCommonPrefix(strs);
}