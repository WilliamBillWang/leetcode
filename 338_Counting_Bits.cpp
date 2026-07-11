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

int main(){
    Solution solution;
    int n  = 5;
    solution.countBits(n);
}