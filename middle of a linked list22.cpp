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
    if(head==NULL || head->next==NULL) {
        return head;
    }
    
    else if( head->next->next ==NULL) {
        return head->next;
        
    }
    
    else{
        Node* fast=head->next;
        Node* slow = head;
        
        while(fast!= NULL) {
            fast = fast->next;
            if(fast!= NULL){
                fast = fast->next;
            }
            slow= slow->next;
        }
        return slow;
    }
    }
