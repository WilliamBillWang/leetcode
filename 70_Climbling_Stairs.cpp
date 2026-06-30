#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        vector<int> stairs;
        stairs.push_back(1);
        stairs.push_back(2);
        if(n == 1) return 1;
        if(n == 2) return 2;
        for(int i=2; i<n;i++ ){
            stairs.push_back(stairs[i-1]+stairs[i-2]);
        }
        return stairs[stairs.size()-1];
    }
};

int main(){
    Solution solution;
    int n= 4;
    solution.climbStairs(n);
}