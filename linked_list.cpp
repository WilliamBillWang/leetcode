using namespace std;
#include<iostream>
struct Node{
        int value;
        Node* next;
        Node(int val){ //constructor
            value = val;
            next = nullptr;
        }
    };
void printelement(Node* head){
    Node* cur = head;
    while(cur != nullptr){
        cout << cur -> value << " ";
        cur = cur ->next;
    }
}
void calculating_size(Node* head){
    Node* cur = head;
    int i = 0;
    while(cur != nullptr){
        i ++;
        cur = cur ->next;
    }
    cout << i << " \n";
    
}
void calculating_sum(Node* head){
    Node* cur = head;
    int total = 0;
    while(cur != nullptr){
        total += cur ->value;
        cur = cur -> next;
    }
    cout << total << " \n";
}

void pushfront(Node*& head){
    cout << "enter the number that you want to push at the first place. ";
    int num;
    cin.clear(); // If you want to use both EOF and cin, you must use the function of clear, so you can continue input the data.
    cin >> num;

    Node* newNode = new Node(num);
    newNode -> next = head;
    head = newNode;
    Node* cur = head;

    while(cur != nullptr){
        cout << cur->value << " ";
        cur = cur->next;
    }
    cout << "\n";

}
void insert(Node*& head){
    int pos, value;
    cout << "enter the position and the value that you want to insert.";
    cin.clear();
    cin >> pos >> value;
    Node* newnode = new Node(value);
    if(pos == 0){
        newnode ->next = head;
        head = newnode;
    }
    
    Node* cur = head;
    for(int i =0; i < pos -1 && cur!= nullptr; i ++){
        cur = cur ->next;
    }
    newnode -> next = cur->next;
    cur -> next = newnode;
    
    // Node* cur = head;
    // Node* cur_prev = head;
    // int prev = --pos;
    // while(pos--){
    //     cur = cur ->next;
    // }
    // while(prev --){
    //     cur_prev = cur_prev ->next;
    // }

    // cur_prev ->next = cur;
    cur = head;
    while(cur != nullptr){
        cout << cur->value << " ";
        cur = cur->next;
    }
    cout << "\n";
}
int main(){
    Node* head = nullptr;
    Node* tail = nullptr;
    int x;
    while(cin >> x){
        Node* newNode = new Node(x);
    
        if(head == nullptr){
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
    }
    // printelement(head);
    // calculating_size(head);
    // calculating_sum(head);
    // pushfront(head);
    insert(head);
}


