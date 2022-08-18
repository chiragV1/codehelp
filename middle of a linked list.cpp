#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/

Node *findMiddle(Node *head) {
    // Write your code here
    
    int cnt=1;
    
    Node* temp = head;
    
    while(temp!=NULL) {
        temp = temp->next;
        cnt++;
    }
    
    if(cnt%2==0) {
        int newcnt=1;
        Node * temp2 = head;
        while(newcnt!=cnt/2) {
            temp2 = temp2->next;
            newcnt++;
        }
        return temp2;
    }
    else{
        int newcnt=1;
        Node* temp3 = head;
        
        
        while(newcnt != (cnt/2)+1) {
            temp3 = temp3->next;
            newcnt++;
        }
        
        return temp3;
    }
}
