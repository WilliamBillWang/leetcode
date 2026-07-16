using namespace std;
#include<bits/stdc++.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode* cur = head;
        while(cur != nullptr){
            arr.push_back(cur->val);
            cur = cur -> next;
        }
        int l = 0;
        int r = arr.size() - 1;
        while(l < r){
            if(arr[l] != arr[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};

int main(){
    Solution solution;
    ListNode* head = new ListNode();
    solution.isPalindrome(head);
}