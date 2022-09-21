#include<bits/stdc++.h>
 
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;

    }
};

void insertNode(Node* head,int d) {
    Node*  newnode = new Node(d);

    if(head == NULL) {
        head = newnode;
    }

    Node* temp = head;

    while(temp->next !=NULL) {
        temp = temp->next;
    }

    temp->next = newnode;

}
void printList(int head) {
    if(head == NULL) {
        cout<<"List is empty"<<endl;;
    }
    Node* temp = head;

    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}

int main() {
  
    Node* node1 = NULL;
 
    return 0;
}