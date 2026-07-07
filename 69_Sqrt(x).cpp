using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int mySqrt(int x) {
        for(unsigned int i = 1; i < 2^16 ; i++){
            if(i * i > x ) return --i; 
            else if(i * i == x) return i;
        }
        return 0;
    }
};

int main(){
    Solution solution;
    int x = 8;
    solution.mySqrt(x);
}   