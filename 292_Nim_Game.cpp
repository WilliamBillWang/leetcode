using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    bool canWinNim(int n) {
        if(n % 4 == 0) return false;
        return true;
    }
};

int main(){
    Solution solution;
    int n = 4;
    solution.canWinNim(n);
}