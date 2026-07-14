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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* dummyA = new ListNode(0);
        dummyA-> next = headA;
        ListNode* dummyB = new ListNode(0);
        dummyB-> next = headB;
        ListNode* curA = dummyA;
        ListNode* curB = dummyB;
        while(curA != nullptr){
            if(curA -> next == curB -> next){
                return curA -> next;
            }
            else{
                ListNode* temp = dummyB;
                while(temp != nullptr){
                    if(curA -> next == temp -> next){
                        return curA -> next;
                    }
                    else temp = temp -> next;
                }
                curA = curA->next;
            }
        }
        return nullptr;
    }
};

int main(){
    Solution solution;
    ListNode* headA,headB;
    solution.getIntersectionNode(headA, headB);
}