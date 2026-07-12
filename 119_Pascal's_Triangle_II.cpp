using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex == 0) return {1};
        if(rowIndex == 1) return {1,1};
        vector<vector<int>> pascal;
        pascal.push_back({1});
        pascal.push_back({1,1});
        for(int i = 2; i<= rowIndex ; i++){
            vector<int> temp;
            temp.push_back(1);
            for(int j = 1; j<i ; j++){
                temp.push_back(pascal[i-1][j] + pascal[i-1][j-1]);
            }
            temp.push_back(1);
            pascal.push_back(temp);
        }
        return pascal[pascal.size()-1];
    }
};

class Solution2 { //Time complexity O(n^2) space complexity O(n)
public:
    vector<int> getRow(int rowIndex) {
        vector<int> prev = {1};

        for (int i = 1; i <= rowIndex; i++) {
            vector<int> cur;
            cur.push_back(1);

            for (int j = 1; j < i; j++) {
                cur.push_back(prev[j - 1] + prev[j]);
            }

            cur.push_back(1);

            prev = cur;
        }

        return prev;
    }
};


class Solution3 { // Using math formula 
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;

        long long cur = 1;

        for (int k = 0; k <= rowIndex; k++) {
            ans.push_back(cur);
            cur = cur * (rowIndex - k) / (k + 1);
        }

        return ans;
    }
};

int main(){
    Solution solution;
    int rowIndex = 3;
    solution.getRow(rowIndex);
}