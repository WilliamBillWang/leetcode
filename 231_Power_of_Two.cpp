using namespace std;
#include<bits/stdc++.h>
class Solution {
public:
    bool isPowerOfTwo(int n) {
        set<int> st;
        for(int i =0; i< 25; i++){
            st.insert(int(pow(2,i)));
        }
        if(st.find(n) != st.end())  return true;

        return false;
    }
};

int main(){
    for(int i =0; i< 50; i++){
        cout << pow(2,i) << ",";
    }
}