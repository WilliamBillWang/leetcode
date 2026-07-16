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


class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n <= 0) return false;
        while(n > 0){
            if(n == 1) return true;
            if(n % 2 != 0) return false;
            n /= 2;
        }
        return true;
    }
};

class Solution {
public:
    bool isPowerOfTwo(int n) {
         return (n > 0) && !(n&(n-1));
    }
};


int main(){
    for(int i =0; i< 50; i++){
        cout << pow(2,i) << ",";
    }
}