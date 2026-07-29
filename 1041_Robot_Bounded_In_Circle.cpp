using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int turn = 0;
    int nx = 0;
    int ny = 0;
    //turned around
    void move(int& turn, int& nx, int& ny){
        int remainder = turn % 4 ;
        if(remainder == 0) ny += 1;
        else if(remainder == 1) nx += 1;
        else if(remainder == 2) ny -= 1;
        else nx -= 1;
    }    


    bool isRobotBounded(string instructions) {
        for(int i = 0 ;i <instructions.size(); i ++){
            if(instructions[i] == 'L') turn += 3;
            else if(instructions[i] == 'R') turn += 1;
            else move(turn, nx ,ny);
        }
        if(nx == 0 && ny == 0) return true;
        else if(turn % 4 == 1 || turn % 4 == 2 || turn % 4 == 3) return true;
        return false;
    }
    
};

int main(){
    Solution solution;
    string instructions = "GGLLGG";
    solution.isRobotBounded(instructions);
}