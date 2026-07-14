using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    string toLowerCase(string s) {
        for(int i =0; i <s.size() ; i++){
            s[i] = tolower(s[i]);
        }
        return s;
    }
};


int main(){
    Solution solution;
    string s;
    solution.toLowerCase(s);
}