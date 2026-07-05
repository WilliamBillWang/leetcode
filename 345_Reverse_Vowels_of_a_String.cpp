using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    string reverseVowels(string s) {
        vector<int> re;
        vector<char> ch;
        for(int i =0; i< s.size(); i ++){
            if(tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u'){
                re.push_back(i);
                ch.push_back(s[i]);
            }
        }
        reverse(re.begin(),re.end());
        for(int i =0; i< re.size(); i ++){
            s[re[i]] = ch[i];
        }
        // cout << s;
        return s;
    }
};

class Solution2 {
public:
    string reverseVowels(string s) {
        int l = 0;
        int r = s.size() - 1;
        while(l < r){
            if((tolower(s[l]) == 'a' || tolower(s[l]) == 'e' || tolower(s[l]) == 'i' || tolower(s[l]) == 'o' || tolower(s[l]) == 'u') && (tolower(s[r]) == 'a' || tolower(s[r]) == 'e' || tolower(s[r]) == 'i' || tolower(s[r]) == 'o' || tolower(s[r]) == 'u')){
                swap(s[l],s[r]);
                l ++;
                r --;
            }
            else if(tolower(s[r]) != 'a' && tolower(s[r]) != 'e' && tolower(s[r]) != 'i' && tolower(s[r]) != 'o' && tolower(s[r]) != 'u') r--;
            else if(tolower(s[l]) != 'a' && tolower(s[l]) != 'e' && tolower(s[l]) != 'i' && tolower(s[l]) != 'o' && tolower(s[l]) != 'u') l++;
            else {
                r--;
                l++;
            }
        }
        // cout << s;
        return s;
    }
};
int main(){
    Solution2 solution;
    string s = "leetcode";
    solution.reverseVowels(s);
}