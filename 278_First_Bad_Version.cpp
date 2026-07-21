using namespace std;
#include<bits/stdc++.h>
#define int long long
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:

    bool isBadVersion(int version){
        if(version >= 1) return true;
    }
    long long firstBadVersion(int n) {
        long long left = 1;
        long long right = n;
        while(left < right){
            long long mid = (left + right) / 2;
            if(isBadVersion(mid)) {
                right = mid - 1;
                if(!isBadVersion(right)) return mid; 
            }
            else {
                left = mid + 1;
                if(isBadVersion(left)) return left;
            }
        }
        return left;
    }
};

int main(){
    Solution solution;
    int n = 3;
    solution.firstBadVersion(n);
}