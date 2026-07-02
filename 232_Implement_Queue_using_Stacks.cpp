using namespace std;
#include<bits/stdc++.h>

class MyQueue {
public:
    stack<int> st1;
    stack<int> st2; 
    MyQueue() {
        
    }
    void push(int x) {
        if(st1.empty()){
            while(!st2.empty()){
            int pu = st2.top();
            st1.push(pu);
            st2.pop();
            }
            st1.push(x);
        }
        else st1.push(x);
    }
    
    int pop() {
        while(!st1.empty()){
            int pu = st1.top();
            st2.push(pu);
            st1.pop();
        }
        int ans = st2.top();
        st2.pop();
        return ans;
    }
    
    int peek() {
        while(!st1.empty()){
            int pu = st1.top();
            st2.push(pu);
            st1.pop();
        }
        if(st2.empty()) return 0;
        return st2.top();
    }
    
    bool empty() {
        if(st1.empty() && st2.empty()) return true;
        return false;
    }
};


int main(){
    MyQueue myqueue;
    myqueue.push(1);
    myqueue.push(2);
    myqueue.peek();
    myqueue.pop();
    myqueue.empty();
}
