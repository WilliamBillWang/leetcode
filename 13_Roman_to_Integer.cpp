using namespace std;
#include<bits/stdc++.h>

int main(){
    map<char,int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;
    //cout << mp['M'];
    string s;
    cin >> s;
    int total = 0;
    for(int i = 0; i < s.length(); i ++){

        if( i + 1 < s.length() and s[i] == 'I' and s[i + 1] == 'V'){
            total += 4;
            i++;
        }
        else if(i + 1 < s.length() and s[i] == 'I' and s[i + 1] == 'X'){
            total += 9;
            i++;
        }
        else if( i + 1 < s.length() and s[i] == 'X' and s[i + 1] == 'L'){
            total += 40;
            i++;
        }
        else if(i + 1 < s.length() and s[i] == 'X' and s[i + 1] == 'C'){
            total += 90;
            i++;
        }
        else if( i + 1 < s.length() and s[i] == 'C' and s[i + 1] == 'D'){
            total += 400;
            i++;
        }
        else if(i + 1 < s.length() and s[i] == 'C' and s[i + 1] == 'M'){
            total += 900;
            i++;
        }
        else{
            total += mp[s[i]];
        }
        
    }
    cout << total;
}