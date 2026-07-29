using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    vector<vector<int>> row = {{0,1,2},{0,1,2},{0,1,2},{0,0,0},{1,1,1},{2,2,2},{0,1,2},{0,1,2}};
    vector<vector<int>> col = {{0,0,0},{1,1,1},{2,2,2},{0,1,2},{0,1,2},{0,1,2},{0,1,2},{2,1,0}};

    string tictactoe(vector<vector<int>>& moves) {

        vector<vector<int>> ground(3,vector<int>(3,-1));
        for(int i =0; i< moves.size(); i ++){
            if(i % 2 == 0) { // A -> 0
                ground[moves[i][0]][moves[i][1]] = 0;
            }
            else{
                ground[moves[i][0]][moves[i][1]] = 1;
            }
        }
        for(int k = 0; k < 8; k ++){
            if(ground[ row[k][0] ][ col[k][0] ] == ground[row[k][1]][col[k][1]] && ground[row[k][1]][col[k][1]] == ground[row[k][2]][col[k][2]] && ground[row[k][1]][col[k][1]] != -1){
                if(ground[ row[k][0] ][ col[k][0] ] == 0) {
                    cout << "A";
                    return "A";
                }
                else {
                    cout << ground[ row[k][0] ][ col[k][0] ];
                    cout << "B";
                    return "B";
                }
            }
        }
        for(int i = 0; i< 3; i ++){
            for(int j = 0; j< 3; j ++){
                if(ground[i][j] == -1) return "Pending";
            }
        }
        return "Draw";

        // for(int i =0; i< 3; i++){
        //     for(int j =0; j< 3; j++){
        //         cout << ground[i][j];
        //     }
        //     cout << "\n";
        // }
    }
};


class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<int> row(3, 0), col(3, 0);
        int diag = 0, antiDiag = 0;

        for (int i = 0; i < moves.size(); i++) {
            int r = moves[i][0];
            int c = moves[i][1];

            // A = +1, B = -1
            int player = (i % 2 == 0) ? 1 : -1;

            row[r] += player;
            col[c] += player;

            if (r == c)
                diag += player;

            if (r + c == 2)
                antiDiag += player;

            if (abs(row[r]) == 3 ||
                abs(col[c]) == 3 ||
                abs(diag) == 3 ||
                abs(antiDiag) == 3) {
                return player == 1 ? "A" : "B";
            }
        }

        return moves.size() == 9 ? "Draw" : "Pending";
    }
};

int main(){
    Solution solution;
    vector<vector<int>> moves = {{0,0}, {2,0}, {1,1}, {2,1} , {2,2}};
    solution.tictactoe(moves);
}