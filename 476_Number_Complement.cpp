using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int findComplement(int num) {
        int i = 0;
        int ans = 0;
        while(num > 0){
            if(num % 2 == 0) {
                ans += pow(2,i);
            }
            num /= 2;
            i ++;
        }
        return ans;
    }
};


class Solution {
public:
    int findComplement(int num) {
        int i = 0;
        int ans = 0;
        while(num > 0){
            if(!(num & 1)) {
                ans += pow(2,i);
            }
            num /= 2;
            i ++;
        }
        return ans;
    }
};

class Solution {
public:
    int findComplement(int num) {
        int mask = 1;

        while (mask < num)
            mask = (mask << 1) | 1;

        return mask ^ num;
    }
};

int main(){
    Solution solution;
    int num = 5;
    solution.findComplement(num);
}