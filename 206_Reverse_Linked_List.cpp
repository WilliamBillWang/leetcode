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
    ListNode* reverseList(ListNode* head) {
        ListNode* next = nullptr;
        ListNode* cur = head;
        ListNode* prev = nullptr;
        while(cur!= nullptr){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
};

int main(){
    Solution solution;
    ListNode* head = new ListNode(1);
    solution.reverseList(head);
}