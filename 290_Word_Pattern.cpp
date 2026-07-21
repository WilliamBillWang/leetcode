using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string input = "";
        for(auto x : s){
            if(x == ' ') {
                words.push_back(input);
                input = "";
            }
            else input += x;
        }

        words.push_back(input);
        if(words.size() != pattern.size()) return false;

        unordered_map<char,string> mp1;
        unordered_map<string, char> mp2;

        for(int i =0; i< words.size(); i++){
            char ch = pattern[i];
            string word = words[i];

            if((mp1.find(ch) != mp1.end()) && (mp1[ch] != word)) return false;
            if((mp2.find(word) != mp2.end()) && (mp2[word] != ch)) return false;
            mp1[ch] = word;
            mp2[word] = ch;
        }
        return true;
    }
};

int main(){
    Solution solution;
    string pattern = "abba";
    string s = "dog cat cat dog";
    solution.wordPattern(pattern,s);
}