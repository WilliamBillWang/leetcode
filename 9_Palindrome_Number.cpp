#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        else {
            vector<int> arr;
            while(x !=0){
                arr.push_back(x%10);
                x /= 10;
            }
            int l = 0, r= arr.size()-1;
            while(l<r){
                if(arr[l] != arr[r]){
                    // cout << "false";
                    return false;
                }
                l++;
                r--;
            }
            // cout << "true";
            return true;
            // for(auto x : arr){
            //     cout << x << " ";
            // }
        }
        
    }   
    
};

//Beat 100%
class Solution2 {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int original = x;
        long long rev = 0;

        while(x > 0){
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        return original == rev;
    }
};

int main(){
    Solution solution;
    int x = 10;
    solution.isPalindrome(x);
}