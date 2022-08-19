/********************************
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

********************************/
void add(Node * &tail, Node* curr) {
        tail->next = curr;
    tail = curr;
}
Node* sortList(Node *head)
{
    // Write your code here.
    
    Node* zhead = new Node(-1);
    Node* ztail = zhead;
    Node* ohead = new Node(-1);
    Node* otail = ohead;
    Node* thead = new Node(-1);
    Node* ttail = thead;
    
    Node* curr = head;
    
    while(curr!=NULL) {
        int val = curr->data;
        
        if(val==0) {
            add(ztail , curr);
        }
        else if(val ==1) {
            add(otail, curr);
        }
        else if(val==2) {
            add(ttail , curr);
        }
        curr= curr->next;
    }
    
    //merge
    if(ohead->next != NULL) {
        ztail->next = ohead->next;
    }
    else{
        ztail->next= thead->next;
    }
    
    otail ->next = thead->next;
    
    ttail->next = NULL;
    
    head = zhead->next;
    
    delete zhead;
    delete ohead;
    delete thead;
    
    return head;
    
    

}
