#include<bits/stdc++.h>

using namespace std ; 

class Node {

    public:
    int data;

    Node* next;
     
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    

   
};

void inserathead(Node* &head , int d) {
        //new node 
        Node* temp = new Node(d);
        temp->next = head;
        head= temp;
    }

 void print(Node* &head) {
        Node* temp = head; 
        while(temp!=NULL){
            cout<<temp->data << " ";
            temp = temp->next;


        }
        cout<<endl;
    }
void inserttail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void insertatpos (Node* &head, Node* &tail ,  int pos , int d) {

    if(pos == 1) {
        inserathead(head , d);
        return;
    }

   

    Node* temp = head ; 
    int cnt =1;

    while(cnt<pos-1) {
        temp = temp->next;
        cnt ++;
    }
    
    if(temp->next==NULL) {
        inserttail(tail , d);
        return;
    }

    Node* nodetoinsert = new Node(d);

    nodetoinsert ->next = temp->next;

    temp ->next = nodetoinsert;


}
int main() {

    Node* node1 = new Node(10);

    cout<<node1->data<<endl;
    cout<<node1->next<< endl;

    Node* head = node1;
    Node* tail = node1;

    print(head);

    inserttail(tail , 12);
    print(head);

    inserttail(tail, 15);
    print(head);

    insertatpos(head ,tail, 3, 22);
    print(head);
    insertatpos(head ,tail, 1, 01);
    print(head);

    insertatpos(head ,tail, 6, 24);
    print(head);
    return 0;
}