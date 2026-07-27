using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int diff = arr[1] -arr[0];
        for(int i = 2; i < arr.size() ; i++){
            if(arr[i] - arr[i - 1] != diff) return false;
        }
        return true;
    }
};

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();

        int mn = *min_element(arr.begin(), arr.end());
        int mx = *max_element(arr.begin(), arr.end());

        // 公差不是整數
        if ((mx - mn) % (n - 1) != 0)
            return false;

        int diff = (mx - mn) / (n - 1);

        // 全部數字都相同
        if (diff == 0)
            return true;

        vector<bool> seen(n, false);

        for (int x : arr) {
            if ((x - mn) % diff != 0)
                return false;

            int idx = (x - mn) / diff;

            if (idx >= n || seen[idx])
                return false;

            seen[idx] = true;
        }

        return true;
    }
};

int main(){
    Solution solution;
    vector<int> arr = {3,5,1};
    solution.canMakeArithmeticProgression(arr);
}