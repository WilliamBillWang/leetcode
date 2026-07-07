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

class Solution2 {
public:
    int mySqrt(int x) {
        if (x < 2) return x;

        int left = 1;
        int right = x;
        int ans = 0;

        while (left <= right) {
            long long mid = left + (right - left) / 2;

            if (mid * mid <= x) {
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return ans;
    }
};

int main(){
    Solution solution;
    int x = 8;
    solution.mySqrt(x);
}   