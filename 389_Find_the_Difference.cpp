using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    char findTheDifference(string s, string t) {
        int arr1[26] = {};
        int arr2[26] = {};
        for(int i = 0; i < s.size() ; i++){
            arr1[s[i] - 'a'] ++;
        }
        for(int i =0; i < t.size() ; i ++){
            arr2[t[i] - 'a'] ++ ;
        }
        for(int i = 0; i< 26 ; i ++){
            if(arr1[i] != arr2[i]) return 'a' + i;
        }
        return ' ';
    }
};

class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(), t.end());
        int l1 = 0;
        int l2 = 0;
        while(l2 < t.size()){
            if(s[l1] != t[l2]) return t[l2];
            else {
                l2 ++;
                l1 ++;
            }
        }        
        return ' ';
    }
};

int main(){
    Solution solution;
    string s = "abcd";
    string t = "abcde";
    solution findTheDifference(s,t);
}

