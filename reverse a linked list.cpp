#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int> *reverse1(LinkedListNode<int> * head) {
    //base case
    if(head ==NULL || head->next == NULL) {
        return head;
    }
    
   LinkedListNode<int> * Shead = reverse1(head->next);
    
    head->next->next = head;
    head->next = NULL;
    
    return Shead;
}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    return reverse1(head);
}
