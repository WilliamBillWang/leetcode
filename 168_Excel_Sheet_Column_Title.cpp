using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        while(columnNumber != 0){
            if(columnNumber % 26 == 0){
                char temp = 'Z';
                ans = temp + ans;
                columnNumber = columnNumber /26 -1;
            }
            else{
                char temp = ('A' + columnNumber % 26) -1;
                ans = temp + ans;
                columnNumber /= 26;
            }
            
        }
        return ans;
    }
};

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;

        while (columnNumber > 0) {
            columnNumber--;

            ans += char('A' + columnNumber % 26);

            columnNumber /= 26;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};

int main(){
    Solution solution;
    int columnNumber = 701;
    solution.convertToTitle(columnNumber);
}