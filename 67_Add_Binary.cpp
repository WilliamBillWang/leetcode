using namespace std;
#include<bits/stdc++.h>

class Solution { //doesn't work for the extreme long string.
public:
    string addBinary(string a, string b) {
        int an = 0;
        int bn = 0;
        for(int i =0; i< a.size(); i++){
            an += (a[i] - '0') * pow(2,a.size()- (i + 1));
        }
        // cout << b.size();
        for(int j =0; j< b.size(); j++){
            bn += (b[j] - '0') * pow(2,b.size() - (j + 1));
        }
        int ans_n = an + bn;
        string ans;
        while(ans_n > 0){
            ans =  to_string(ans_n % 2) + ans;
            ans_n /= 2;
        }
        if(ans == "") return "0";
        // cout << ans;
        return ans;
    }
};
class Solution2{
    public:
    string addBinary(string a, string b) {
        int ina = a.size() -1;
        int inb = b.size() -1;
        if(inb > ina){
            string c = a;
            a = b;
            b = c;
        }
        bool remainder = false;
        string ans = "";
        while(inb != -1){
            if(a[ina] == '1' && b[inb] == '1' ) remainder = true;
            else if((a[ina] == '0' && b[inb] == '1') || (a[ina] == '0' && b[inb] == '1')) {
                ans = ans + '1';
            }
            else ans = ans + '0';
            while(remainder){
                ina--;
                if(ina >= 0 && a[ina] == '1'){
                    ans += '0';
                }
                else{
                    ans += "1";
                    remainder = false;
                }
            }  
            inb--;
            ina--;
        }
        return ans;
    }
};


class Solution3 {
public:
    string addBinary(string a, string b) {
        int ina = a.size() - 1;
        int inb = b.size() - 1;
        int carry  = 0;
        string ans = "";
        while(ina >= 0 || inb >= 0 || carry){
            int sum = carry;
            if(ina >= 0) sum += a[ina] - '0';
            if(inb >= 0) sum += b[inb] - '0';
            ans = char(sum % 2 + '0') + ans;
            carry = sum /2;
            ina--,inb--;
        }
        return ans;
    }
};

int main(){
    Solution3 solution;
    string a = "11", b = "1";
    solution.addBinary(a,b);
}