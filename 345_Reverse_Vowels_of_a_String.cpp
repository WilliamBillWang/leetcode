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

int main(){
    Solution solution;
    string s = "IceCreAm";
    solution.reverseVowels(s);
}