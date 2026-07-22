using namespace std;
#include<bits/stdc++.h>

    class Solution {
    public:
        bool isPowerOfThree(int n) {
            if(n <= 0) return false;
            while(n > 1) {
                if(n % 3 != 0) return false;
                n/=3;
            }
            if(n == 1) return true;
            return false;
        }
    };

int main(){
    Solution solution;
    int n = 27;
    solution.isPowerOfThree(n);
}