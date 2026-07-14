using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mp;
        for(auto str : stones){
            mp[str] ++;
        }
        int sum = 0;
        for(auto x : jewels){
            sum += mp[x];
        }
        return sum;
    }
};
class Solution2 {
public:
    int numJewelsInStones(string jewels, string stones) {
    int num = 0;
    for (int i = 0; i < jewels.size(); i++){
        num += count(stones.begin(), stones.end(), jewels[i]);
    }
    return num;
}
};
int main(){
    Solution solution;
    string jewels = "aA";
    string stones = "aAAbbbb";
    solution.numJewelsInStones(jewels,stones);
}