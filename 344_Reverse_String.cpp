#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        // solution 1 : reverse(s.begin(),s.end());
        //! solution 2 :
        int l = 0;
        int r = s.size()-1;
        while(l<r){
            swap(s[l],s[r]);
            l ++;
            r --;
        }
        // for(auto x:s){
        //     cout << x << " ";
        // }
    }
};

int main(){
    Solution solution;
    vector<char> arr = {'h','a','n','n','a','H'};
    solution.reverseString(arr);
}