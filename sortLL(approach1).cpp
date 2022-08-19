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

Node* sortList(Node *head)
{
    // Write your code here.
    int c0=0;
    int c1=0;
    int c2=0;
    
    Node* temp = head;
    
    while(temp!=NULL) {
        if(temp->data==0) {
            c0++;
        }
       else if(temp->data==1) {
            c1++;
        }
        else if(temp->data==2) {
            c2++;
        }
        temp = temp->next;
    }
    
    temp = head;
    
    while(temp!=NULL) {
        if(c0!=0){
            temp->data=0;
            c0--;
        }
        else if(c1!=0) {
            temp->data  = 1;
            c1--;
        }
        else if(c2!=0) {
            temp->data=2;
            c2--;
        }
        
        temp = temp->next;
    }
    return head;
    
    
    
    

}
