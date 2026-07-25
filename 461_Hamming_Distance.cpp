using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x ^ y;
        int ans = 0;
        // while(z > 0){
        //     if(z % 2 == 1)ans ++;
        //     z /= 2;
        // }
        while(z){
            ans += z & 1;
            z >>= 1;
        }
        return ans;
    }
};


int main(){
    Solution solution;
    int x = 1,y = 4;
    solution.hammingDistance(x,y);
}