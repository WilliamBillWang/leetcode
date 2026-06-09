using namespace std;
#include<bits/stdc++.h>

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int value){
        val = value;
        next = nullptr;
    }
};
void printList(ListNode* head){
    while(head != nullptr){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

ListNode* build(vector<int> arr){
    if(arr.empty()) return nullptr;

    ListNode* head = new ListNode(arr[0]);
    ListNode* tail = head;

    for(int i = 1 ; i < arr.size() ; i++){
        tail->next = new ListNode(arr[i]);
        tail = tail->next;
    }

    return head;
}
int main(){
    ListNode* list1 = build({1,2,4});
    ListNode* list2 = build({1,3,4});
    ListNode* dummy = new ListNode(0);
    ListNode* tail = dummy;
    
    ListNode* cur1 = list1;
    ListNode* cur2 = list2;

    while(cur1 != nullptr && cur2 != nullptr){
        if(cur1 ->val <= cur2 ->val){
            tail ->next = cur1;
            cur1 = cur1 -> next;
        }
        else{
            tail ->next = cur2;
            cur2 = cur2 -> next;
        }
        tail = tail -> next;
    }
    if(cur1  != nullptr){
        tail -> next = cur1;
    }
    else if(cur2 != nullptr){
        tail -> next = cur2;
    }
    printList(dummy->next);
}