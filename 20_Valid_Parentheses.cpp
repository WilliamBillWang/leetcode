using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    bool can_cancel(char l, char r){
        return (l == '(' && r == ')') || (l == '[' && r == ']') || (l == '{' && r == '}');
    }

    bool isValid(string s) {
        stack<char> st;
        for(int i =0; i< s.size() ; i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }
            else{
                if(st.empty()) return false;
                else{
                    if(can_cancel(st.top(),s[i])){
                        st.pop();
                    }
                    else return false;
                }   
            }
        }
        if(st.empty()) return true;
        return false;
    }
};

int main(){
    Solution solution;
    string s = "([)]";
    solution.isValid(s);
}