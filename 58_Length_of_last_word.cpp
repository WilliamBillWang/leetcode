using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size();
        bool find = false;
        int count = 0;
        for(int i =len - 1; i >= 0; i--){
            if(!find && s[i] == ' ') continue;
            else if(find && s[i] == ' '){
                // cout << count;
                return count;
            }
            else{
                count ++;
                find = true;
            }
        }
        return count;
    }
};

int main(){
    Solution solution;
    string s = "a";
    solution.lengthOfLastWord(s);
}