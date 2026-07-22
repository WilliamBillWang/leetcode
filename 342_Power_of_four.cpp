using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;
        while(n > 1){
            if(n % 4 != 0) return false;
            n /= 4;
        }
        if(n == 1)return true;
        return false;
    }
};

int main(){
    Solution solution;
    int n = 16;
    solution.isPowerOfFour(n);
}