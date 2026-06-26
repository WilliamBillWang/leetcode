using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> arr(s.length(),1000000);
        for(int i =0; i< s.length(); i ++){
            if(s[i] == c) {
                for(int j =0; j< s.length(); j++){
                    arr[j] = min(arr[j],abs(j-i));
                }
            }
        }
        // for(auto x : arr){
        //     cout << x << " ";
        // }
        return arr;
    }
};
class Solution2 {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> res(n, n);

        // 從左掃
        int last = -n;
        for (int i = 0; i < n; i++) {
            if (s[i] == c) last = i;
            res[i] = i - last;
        }

        // 從右掃
        last = 2 * n;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == c) last = i;
            res[i] = min(res[i], last - i);
        }

        return res;
    }
};

int main(){
    Solution2 solution;
    string s = "loveleetcode";
    char c = 'e';
    solution.shortestToChar(s,c);
}