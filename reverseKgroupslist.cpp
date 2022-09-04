/****************************************************************
    Following is the Linked List node structure

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


Node* kReverse(Node* head, int k) {
    // Write your code here.
    
    if(head==NULL||head->next == NULL) {
        
        return head;
        
    }
    
    //reverse first K nodes
    Node* next = NULL;
    Node* cur = head;
    Node* prev = NULL;
    
    int cnt =0;
    while(cur!=NULL && cnt<k) {
        next = cur ->next;
        cur->next = prev;
        prev= cur;
        cur= next;
        
        cnt++;
        
    }
    
    //step2 recursion
    
    if(next !=NULL) {
        head->next = kReverse(next , k);
    }
    
    //step 3
    
    return prev; 
}
