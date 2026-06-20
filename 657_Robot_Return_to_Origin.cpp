using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    bool judgeCircle(string moves) {
        int ud = 0;
        int lr = 0;
        for(int i = 0; i< moves.size() ; i++){
            if(moves[i] == 'U') ud++;
            else if(moves[i] == 'D') ud --;
            else if(moves[i] == 'L') lr --;
            else lr ++;
        }
        if(lr == 0 && ud == 0) {
            // cout << "true";
            return true;
        }
        // cout << "false";
        return false;
    }   
};

int main(){
    Solution solution;
    string move = "LL";
    solution.judgeCircle(move);
}