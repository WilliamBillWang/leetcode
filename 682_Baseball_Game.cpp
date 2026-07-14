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

class Solution2 {//can't use the pointer
public:
    int calPoints(vector<string>& operations) {
        int* fir = nullptr;
        int* second = nullptr;
        int sum = 0;
        for(string str : operations){
            if(str == "C"){
                sum -= *fir;
                fir = second;
            }
            else if(str == "D"){
                sum += (*fir) * 2;
            }
            else if(str == "+"){
                sum += (*fir) + (*second);
            }
            else{
                if(fir == nullptr) {
                    int val = stoi(str);
                    fir = &val;
                    sum += val;
                }
                else if(second == nullptr){
                    int val = stoi(str);
                    second = &val;
                    sum += val;
                }
                else{
                    int temp = stoi(str);
                    second = fir;
                    fir = &temp;
                    sum += temp;
                }
            }
            
        }
        return sum;
    }
};  


int main(){
    Solution2 solution;
    vector<string> operations = {"5","-2","4","C","D","9","+","+"};
    solution.calPoints(operations);
}