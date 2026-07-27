using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int n;
        bool one_is_larger = false;
        if(word1.size() > word2.size()){
            n = word2.size();
            one_is_larger = true;
        }
        else{
            n = word1.size();
        }
        for(int i =0; i< n; i ++){
            ans += word1[i];
            ans += word2[i];
        }
        if(one_is_larger){
            for(int i = n; i< word1.size() ; i++){
                ans += word1[i];
            }
        }
        else{
            for(int i = n; i< word2.size() ; i++){
                ans += word2[i];
            }
        }
        return ans;
    }
};

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int i = 0;
        while (i < word1.length() || i < word2.length()) {
            if (i < word1.length()) {
                result += word1[i];
            }
            if (i < word2.length()) {
                result += word2[i];
            }
            i++;
        }
        return result;
    }
};

int main(){
    Solution solution;
    string word1 = "abc";
    string word2 = "pqr";
    solution.mergeAlternately(word1,word2);
}