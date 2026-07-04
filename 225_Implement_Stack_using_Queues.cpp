using namespace std;
#include<bits/stdc++.h>

class MyStack {
public:
    queue<int> qu;
    int n = 0;
    MyStack() {
        
    }
    
    void push(int x) {
        qu.push(x);
        n++;
    }
    
    int pop() {
        for(int i =0; i< n-1; i ++){
            int head = qu.front();
            qu.push(head);
            qu.pop();
        }    

        int ans = qu.front();
        qu.pop();
        n--;
        cout << ans;

        return ans;
    }
    
    int top() {
        for(int i =0; i< n-1; i ++){
            int head = qu.front();
            qu.push(head);
            qu.pop();
        }    
        int ans = qu.front();
        qu.push(ans);
        qu.pop();
        cout << ans;
        return ans;
    }
    
    bool empty() {
        return qu.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
int main(){
    MyStack solution;
    solution.push(1);
    solution.push(2);
    solution.top();
    solution.pop();
    solution.empty();
}