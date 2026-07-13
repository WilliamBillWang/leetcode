using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans = "";
        if(num1.size() < num2.size()) swap(num1,num2); // num1's size is larger.

        int j = num2.size() -1;
        int i = num1.size() -1;
        int add = 0;
        int carry = 0;


        while(j >= 0 && i >= 0){
            int cur = 0;
            cur = carry + (num1[i] - '0') + (num2[j] - '0');
            carry = 0;
            if(cur >= 10){
                while(cur >= 10){
                    carry ++;
                    add = cur % 10;
                    cur /= 10;
                    ans = to_string(add) + ans;
                }
            }
            else{
                ans = to_string(cur) + ans;    
            }
            
            j--;
            i--;
        }


        while(i >= 0){
            int cur = 0;
            cur = carry + (num1[i] - '0');
            carry = 0;
            if(cur >= 10){
                while(cur >= 10){
                    carry ++;
                    add = cur % 10;
                    cur /= 10;
                    ans = to_string(add) + ans;
                }
            }
            else{
                ans = to_string(cur) + ans;    
            }
            i--;
        }
        if(carry > 0) ans = to_string(carry) + ans;
        return ans;
    }
};



class Solution {
public:
    string addStrings(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();
        
        if(n<m){
            swap(num1,num2);
            swap(n,m);
        }
        
        int carry = 0;
        int j = m-1;
        
        for(int i=n-1; i>=0; i--){
            int bit1 = num1[i] - '0';
            int sum = bit1 + carry;
            
            if(j>=0){
                int bit2 = num2[j] - '0';
                sum += bit2;
                j--;
            }
            
            int bit = sum%10;
            carry = sum/10;
            
            num1[i] = char(bit + '0');
        }
        
        if(carry>0){
            num1 = '1' + num1;
        }
        
        return num1;
    }
};

int main(){
    Solution solution;
    string num1 = "9";
    string num2 = "99";
    solution.addStrings(num1,num2);
}