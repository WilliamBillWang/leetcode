using namespace std;
#include<bits/stdc++.h>
class Solution {
public:
    bool isHappy(int n) {
        string ston = to_string(n);
        int total = n;
        map<int,int> mp;
        mp[n]++;
        while(total != 1){
            if(mp[total] >= 2){
                return false;
            }
            else{
                ston = to_string(total);
                total = 0;
                for(int i =0 ; i< ston.size(); i++){
                    total += pow(ston[i] - '0',2);
                }
                mp[total]++;
            }
        }
        return true;
        
    }// return 0;
};

int main(){
    Solution solution;
    int num = 2;
    solution.isHappy(num);
}