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

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
        return true;
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != nullptr && fast -> next != nullptr){
            fast = fast ->next -> next;
            slow = slow -> next; 
        }

        if(fast) slow = slow -> next;

        ListNode* next = nullptr;
        ListNode* cur = slow;
        ListNode* prev = nullptr;

        while(cur != nullptr){
            next = cur -> next;
            cur -> next = prev;
            prev = cur;
            cur = next;
        }

        ListNode* first = head;
        ListNode* second = prev;
        while(second){
            if(first->val != second->val) return false;
            first = first -> next;
            second = second -> next;
        }
        return true;

    }
};

int main(){
    Solution solution;
    ListNode* head = new ListNode();
    solution.isPalindrome(head);
}