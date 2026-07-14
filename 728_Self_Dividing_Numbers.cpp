using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        bool push = false;
        for(int i = left; i <= right; i++){
            push = true;
            int num = i;
            while(num != 0){
                int div = num % 10;
                if(div == 0){
                    push = false;
                    break;
                }
                else if(i % div != 0){
                    push = false;
                    break;
                }
                num /= 10;
            }
            if(push) ans.push_back(i);
        }
        return ans;
    }   
};

int main(){
    Solution solution;
    int left = 47;
    int right = 85;
    solution.selfDividingNumbers(left,right);
}