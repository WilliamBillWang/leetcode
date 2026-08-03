using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ma = INT_MIN;
        for(int i =0;i < accounts.size();i ++){
            int plus = 0;
            for(int j =0; j< accounts[i].size();j ++){
                plus += accounts[i][j];
            }
            ma = max(ma,plus);
        }
        return ma;
    }
};

int main(){
    Solution solution;
    vector<vector<int>> accounts = {{1,5},{7,3},{3,5}};
    solution.maximumWealth(accounts);
}