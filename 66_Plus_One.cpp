using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last_num = digits[digits.size()-1] + 1;
        int index = digits.size()-1;
        bool stop = false;
        while(!stop && index >= 0){
            if(last_num == 10){
                if(index == 0){
                    digits.resize(digits.size()+1);
                    digits[0] = 1;
                    stop = true;
                }
                else{
                    digits[index] = 0;
                    index --;
                    last_num = digits[index] + 1;
                }
            }
            else {
                stop = true;
                digits[index] = last_num;
            }
        }
        return digits;
    }
};

int main(){
    Solution solution;
    vector<int> digits = {9};
    solution.plusOne(digits);
}