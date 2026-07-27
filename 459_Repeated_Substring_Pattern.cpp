using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        for(int i = 1; i<= s.size() /2 ; i++){
            bool perfect = true;
            for(int j = i ;j < s.size(); j++){
                if(s.size() % i != 0) {
                    perfect = false;
                    break;
                }
                if(s[j] != s[j%i]) {
                    perfect = false;   

                }
            }
            if(perfect) return true;
        }
        return false;
    }
};

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        for (int i = 1; i <= n / 2; ++i) {
            if (n % i == 0) {
                string substring = s.substr(0, i);
                string repeated = "";
                for (int j = 0; j < n / i; ++j) {
                    repeated += substring;
                }
                if (repeated == s) return true;
            }
        }
        return false;
    }
};

int main(){
    Solution solution;
    string s = "abab";
    solution.repeatedSubstringPattern(s);
}