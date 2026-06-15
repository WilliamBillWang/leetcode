using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr(numRows);
        for(int j = 0 , i = 1; i <= numRows; i++ ,j ++){
            arr[j].resize(i);
        }

        if(numRows > 2){
            arr[0] = {1};
            arr[1] = {1,1};
            for(int i = 2; i <numRows ; i++ ){
                for(int j = 0; j< arr[i].size(); j++){
                    if(j == 0 || j == arr[i].size() - 1) arr[i][j] = 1;
                    else{
                        arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
                    }
                }
            }
            return arr;
        }
        else if(numRows == 1){
            return {{1}};
        }
        else{
            return {{1},{1,1}};
        }
        // for(int i = 0; i< numRows; i++){
        //     for(int j = 0; j< arr[i].size(); j++){
        //         cout << arr[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
    }
};


int main(){
    int num = 10;
    Solution solution;
    solution.generate(num);

}