using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int> mp;
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";
        for(auto x:row1)mp[x] = 1;
        for(auto x:row2)mp[x] = 2;
        for(auto x:row3)mp[x] = 3;

        vector<string> ans;
        for(int i =0; i< words.size(); i++){
            string word = words[i];
            int fixed = mp[tolower(word[0])];
            bool push = true;
            for(int j = 1; j< word.size(); j++){
                if(mp[tolower(word[j])] != fixed){
                    push = false;
                    break;
                } 
            }
            if(push) ans.push_back(word);
        }
        return ans;
    }
};

int main(){
    Solution solution;
    vector<string> words = {"Hello","Alaska","Dad","Peace"};
    solution.findWords(words);
}