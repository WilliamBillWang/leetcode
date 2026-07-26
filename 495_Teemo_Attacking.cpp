using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration){
        int ans = 0;
        int l = timeSeries[0], r = l + duration;

        for(int i =0; i < timeSeries.size() ; i ++){

            int nl = timeSeries[i];
            int nr = nl + duration;

            if(nl <= r) r = nr;
            else{
                ans += r - l;
                r = nr;
                l = nl;
            }
        }
        ans += r - l;
        return ans;
    }
};

int main(){
    Solution solution;
    vector<int> timeSeries = {1,4};
    int duration = 2;
    solution.findPoisonedDuration(timeSeries,duration);
}