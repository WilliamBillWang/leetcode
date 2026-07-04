using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int hammingWeight(int n) {
        int hammingweight = 0;
        while(n>0){
            hammingweight += n % 2;
            n /= 2;
        }
        // cout << hammingweight;
        return hammingweight;
    }
};
class Solution2 {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while (n) {
            ans += (n & 1);
            n >>= 1;
        }
        return ans;
    }
};

int main(){
    Solution solution;
    int n = 2147483645;
    solution.hammingWeight(n);
}