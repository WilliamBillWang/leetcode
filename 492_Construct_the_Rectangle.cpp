using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    vector<int> constructRectangle(int area) {
        int mi = INT_MAX;
        vector<int> ans;
        for(int i =1; i<= sqrt(area); i ++){
            if(area % i == 0){
                int div = area / i;
                int diff = abs(i - area / i);
                if(mi > diff){
                    mi = diff;
                    if(i < div) ans = {div , i};
                    else ans = {i, div};
                }
            }
        }
        return ans;
    }
};

class Solution { //simplify
public:
    vector<int> constructRectangle(int area) {

        vector<int> ans;

        for(int i = 1; i * i <= area; i++){
            if(area % i == 0){
                ans = {area / i, i};
            }
        }

        return ans;
    }
};

int main(){
    Solution solution;
}