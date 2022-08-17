#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
    int data ;
    Node* prev;
    Node* next;
    
    Node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node* head) {
    Node* temp = head;
    
    while(temp !=NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* head) {
    Node* temp = head;
    int len  =0;
    
    while(temp !=NULL) {
        len++;
        temp = temp->next;
    }
    
    return len;
}
void insertAtHead(Node* &head , int d) {
    Node* temp = new Node(d);
    
    temp->prev=NULL;
    temp ->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* tail , int d) {
    Node* temp = new Node(d);
    
    tail->next = temp;
    temp->prev = tail;
    temp->next = NULL;
    temp = tail;
}

void insertAtpos(Node*head, Node* tail , int d , int pos) {
    
    if(pos ==1 ) {
        insertAtHead(head , d);
        return;
    }
    
    int cnt=1;
    Node* temp = head;
    Node* nodetoinsert = new Node(d);
    
    while(cnt<pos-1){
        temp = temp->next;
        cnt++;    
    }
    
    if(temp->next ==NULL) {
        insertAtTail(tail, d);
        return;
    }
    
    nodetoinsert->prev = temp;
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    
    
}

int main() {
    
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    
    print(head);
    
    insertAtHead(head , 1);
    print(head);
    
    insertAtTail(tail , 11);
    print(head);
    
    insertAtpos(head, tail , 12, 3);
    print(head);
    
    
    
    return 0;
}