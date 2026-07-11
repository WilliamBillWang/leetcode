using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr;
        for(int i =0; i<= n; i++){
            int j = i;
            int count = 0;
            while(j != 0){
                count += j % 2;
                j /= 2;
            }
            arr.push_back(count);
        }
        return arr;
    }
};
class Solution2 {
public:
    vector<int> countBits(int n) {
        vector<int> dp(n + 1);

        for (int i = 1; i <= n; i++) {
            dp[i] = dp[i / 2] + (i % 2);
        }

        return dp;
    }
};

int main(){
    Solution solution;
    int n  = 5;
    solution.countBits(n);
}