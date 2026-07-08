using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size()-1;
    
        while(l < r){
            while(l < r && !isalnum(s[l])) l++;
            while(l < r && !isalnum(s[r])) r--;
            if(tolower(s[l]) != tolower(s[r])) return false;
            l++;
            r--;
        }
        return true;
    }
};

int main(){
    Solution solution;
    string s = "A man, a plan, a canal: Panama";
    solution.isPalindrome(s);
}