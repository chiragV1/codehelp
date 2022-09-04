/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode* reverse(ListNode* head) {
        
        if(head == NULL || head ->next ==NULL) {
            return head;
        }
        
        ListNode* shead = reverse(head -> next);
        
        head ->next->next = head;
        head->next = NULL;
        
        return shead;
    }
//     void print(ListNode* head) {
//         while(head !=NULL) {
//             cout<<head->val<<" ";
//             head = head->next;
//         }
//         cout<<endl;
//     }
    
    bool isPalindrome(ListNode* head) {
        
        if(head == NULL || head->next == NULL) {
            return true;
        }
        
        ListNode* nhead = reverse(head);
        
       
        
        while(head!=NULL || nhead !=NULL) {
            if(head->val != nhead->val) {
                return false;
            }
            else{
                head = head->next;
                nhead = nhead->next;
            }
        }
        
        return true;
        
        
    }
};
