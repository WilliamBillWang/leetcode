using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;

        for (int start = 0; start + needle.size() <= haystack.size(); start++) {
            int j = 0;
            while (j < needle.size() && haystack[start + j] == needle[j]) {
                j++;
            }

            if (j == needle.size())
                return start;
        }

        return -1;
    }
};

int main(){
    Solution solution;
    string h = "mississippi" ,n = "issip";
    solution.strStr(h,n);
}