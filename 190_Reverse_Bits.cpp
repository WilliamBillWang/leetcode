using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int reverseBits(int n) {
        bitset<32> bt(n);
        int l = 0;
        int r = 31;
        while(l < r){
            int temp = 0;
            temp = bt[l];
            bt[l] = bt[r];
            bt[r] = temp;
            l ++ ;
            r -- ;
        }
        int sum = 0;
        for(int i =0; i< 32 ; i ++){
            sum += bt[i] * pow(2,i);
        }
        return sum;
    }
};

class Solution {
public:
    int reverseBits(int n) {
        int ans = 0;
        for(int i = 0; i < 32; i++){
            ans <<= 1;
            ans = ans | (n & 1);
            n >>= 1;
        }
        return ans;
    }
};


int main(){
    Solution solution;
    int n = 43261596;
    solution.reverseBits(n);
}