using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum = 0;
        for(int i = columnTitle.size() - 1; i>= 0; i--){
            sum += (columnTitle[i] - 'A' + 1) * pow(26,columnTitle.size() - i - 1);
        }
        return sum;
    }
};

int main(){
    Solution solution;
    string columnTitle = "AB";
    solution.titleToNumber(columnTitle);
}