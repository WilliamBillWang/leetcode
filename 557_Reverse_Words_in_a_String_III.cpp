using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    string reverseWords(string s) {
        int l = 0;
        int r = 0;
        int start = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] != ' ') l = i;
            for(int j = l; j< s.size(); j++){
                if(s[j] == ' ') {
                    r = j -1;
                    start = j;
                    break;
                }
                else if(j == s.size() - 1){
                    r = j;
                    start = j;
                    break;
                }
            }
            while(l < r){
                swap(s[l],s[r]);
                l ++;
                r --;
            }
            if(i == s.size() -1) break;
            i = start;

        }
        return s;
    }
};

int main(){
    Solution solution;
    string s = "Let's take LeetCode contest";
    solution.reverseWords(s);
}