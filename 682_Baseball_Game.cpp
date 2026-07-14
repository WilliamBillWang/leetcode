using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(string str : operations){
            if(str == "C"){
                st.pop();
            }
            else if(str == "D"){
                st.push(st.top() * 2);
            }
            else if(str == "+"){
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                int sum = num1 + num2;
                st.push(num1);
                st.push(sum);
            }
            else{
                st.push(stoi(str));
            }
        
        }
        int sum = 0;
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};

int main(){
    Solution solution;
    vector<string> operations = {"5","-2","4","C","D","9","+","+"};
    solution.calPoints(operations);
}