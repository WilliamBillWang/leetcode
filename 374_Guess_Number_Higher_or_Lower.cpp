using namespace std;
#include<bits/stdc++.h>

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guess(int num){
        int answer = 2;
        if(num > answer)return -1;
        else if(num < answer) return 1;
        return 0;
    }

    int guessNumber(int n) {
        int l = 1;
        int r = n;
        int mid;
        while(l < r){
            mid = (l + r) / 2;
            if(guess(mid) == -1) // guess > pick
            r = mid - 1;
            else if(guess(mid) == 1) // guess < pick
            l = mid + 1 ;
            else return mid;
        }
        return l;
    }
};

class Solution {
public:
    int guessNumber(int n) {
        int l = 1;
        int r = n;
        int mid;
        while(l < r){
            mid = l + (r - l) / 2;
            if(guess(mid) == -1) // guess > pick
            r = mid - 1;
            else if(guess(mid) == 1) // guess < pick
            l = mid + 1 ;
            else return mid;
        }
        return l;
    }
};


class Solution  {
public:
    int guessNumber(int n) {
        int beg = 1, end = n;
        while (beg <= end) {
            int mid = beg + (end - beg) / 2;
            int res = guess(mid);
            if (res == 0) return mid;
            else if (res == 1) beg = mid + 1;
            else end = mid - 1;
        }
        return 0;
    }
};

int main(){
    Solution solution;
    int n = 2;
    solution.guessNumber(n);
}