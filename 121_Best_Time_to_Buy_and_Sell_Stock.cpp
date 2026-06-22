using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // set<int,greater<int>> st;
        // for(int i =0 ;i < prices.size(); i ++){
        //     for(int j = i; j <prices.size(); j++){
        //         st.insert(prices[j]-prices[i]);
        //     }
        // }
        // for(auto x:st){
        //     if(x>0) {
        //         cout << x;
        //         return x;
        //     }
        //     else if(x == *st.rbegin() && x < 0){
        //         cout << 0;
        //         return 0;
        //     }
        // }
        // return 0;

        int min_prices = prices[0];
        int ans = 0;
        for(int i =1 ;i< prices.size(); i++){
            ans = max(ans,prices[i] - min_prices);
            min_prices = min(prices[i],min_prices);
        }
        cout << ans;
        return ans;
    }
};

int main(){
    Solution solution;
    vector<int> prices = {7,6,4,3,1};
    solution.maxProfit(prices);
}