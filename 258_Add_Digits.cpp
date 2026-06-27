using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int addDigits(int num) {
        int temp = 0;
        while(num >= 10){
            temp = 0;
            while(num!= 0){
                temp = temp + num % 10;
                num /= 10;
            }
            num = temp;
        }
        return num;
    }
};

int main(){
    Solution solution;
    int num = 38;
    solution.addDigits(num);
}