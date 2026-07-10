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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur = head;
        if(head == nullptr) return head;
        while(cur -> next != nullptr){
            if( cur -> next -> next != nullptr && cur -> next -> val == cur -> val){
                cur -> next = cur -> next -> next;
            }
            else if(cur -> next -> next == nullptr && cur -> next -> val == cur -> val){
                cur -> next = nullptr;
            } 
            else{
                cur = cur -> next;
            }
        }
        return head;
    }
};

class Solution2 {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return nullptr;

        ListNode* cur = head;

        while(cur->next != nullptr){
            if(cur->val == cur->next->val){
                cur->next = cur->next->next;
            }
            else{
                cur = cur->next;
            }
        }

        return head;
    }
};

int main(){

}