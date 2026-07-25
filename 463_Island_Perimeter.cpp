using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int r[4] = {0,1,-1,0};
    int c[4] = {1,0,0,-1};
    int judge(vector<vector<int>>& grid,int nr,int nc, int& row, int& col){
        int val = 0;
        for(int k = 0; k < 4 ; k++){
            if((nr + r[k] == -1) || (nr + r[k] == row ) || (nc + c[k] == -1) || (nc + c[k] == col )) val ++;
            else if(grid[nr + r[k]][nc + c[k]] == 0) val ++;
        }
        return val;
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int ans = 0;

        for(int i =0; i< row ; i ++){
            for(int j = 0; j < col ; j++){
                if(grid[i][j] == 1){
                    ans += judge(grid,i,j,row,col);
                }
            }
        }
        return ans;
    }
};

class Solution {
public:
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int perimeter = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (grid[i][j] == 1) {

                    for (int k = 0; k < 4; k++) {

                        int ni = i + dx[k];
                        int nj = j + dy[k];

                        if (ni < 0 || ni >= m ||
                            nj < 0 || nj >= n ||
                            grid[ni][nj] == 0) {
                            perimeter++;
                        }
                    }
                }
            }
        }

        return perimeter;
    }
};

int main(){
    Solution solution;
    vector<vector<int>> grid = {{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};
    solution.islandPerimeter(grid);
}