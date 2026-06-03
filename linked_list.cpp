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
void pushback(Node*& head,int iter){
    cin.clear();
    cout << "enter the number that you wnat to push at the back.";
    int value;
    cin >> value;
    Node* newnode = new Node(value);
    Node* cur = head;
    while(cur->next != nullptr){
        cur = cur->next;
    }

    cur -> next = newnode;   
    cur = head;

    while(cur != nullptr){
        cout << cur->value << " ";
        cur = cur ->next;
    }
    cout << "\n";
}
void popfront(Node*& head){
    Node* cur = head;
    head = head -> next;
    delete cur;
    cur = head;
    while(cur != nullptr){
        cout << cur->value << " ";
        cur = cur -> next;
    }
    cout << "\n";
}

void popback(Node*& head){
    Node* cur = head;
    while(cur->next->next != nullptr){
        cur = cur -> next;
    }
    delete cur -> next;
    cur->next = nullptr;
    cur = head;
    while(cur != nullptr){
        cout << cur ->value << " ";
        cur = cur -> next;
    }
    cout << "\n";
}

void remove(Node*& head){
    cout << "enter the number that you want to remove.";
    int del;
    cin.clear();
    cin >> del;
    // Node* cur = head;
    // Node* temp = head;
    // while(cur != nullptr && head->value != del){
    //     if(cur-> next -> value == del){
    //         temp = cur;
    //         cur = cur -> next;
    //         break;
    //     }
    //     else cur = cur ->next;
    // }
    // if(head ->value == del){
    //     head = temp->next;
    //     cur = head;
    //     delete temp;
    //     while(cur != nullptr){
    //     cout << cur -> value << " ";
    //     cur = cur -> next;
    //     }
    //     cout << "\n";
    // }
    // else {
    //     temp ->next = cur->next;
    //     delete cur;
    //     cur = head;
        // while(cur != nullptr){
        // cout << cur -> value << " ";
        // cur = cur -> next;
        // }
        // cout << "\n";
    // }
    if(head == nullptr) return;

    if(head->value == del){
        Node* temp = head;
        head = head->next;
        delete temp;
        Node* cur = head;
        while(cur != nullptr){
        cout << cur -> value << " ";
        cur = cur -> next;
        }
        cout << "\n";
        return;
    }

    Node* cur = head;

    while(cur->next != nullptr && cur->next->value != del){
        cur = cur->next;
    }

    if(cur->next == nullptr) return;

    Node* temp = cur->next;
    cur->next = temp->next;
    delete temp;
    cur = head;
    while(cur != nullptr){
        cout << cur -> value << " ";
        cur = cur -> next;
    }
    cout << "\n";

    
}
int main(){
    Node* head = nullptr;
    Node* tail = nullptr;
    int x;
    int i = 0;
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
        i ++;
    }
    // printelement(head);
    // calculating_size(head);
    // calculating_sum(head);
    // pushfront(head);
    // insert(head);
    // pushback(head,i);
    // popfront(head);
    // popback(head);
    remove(head);
}


