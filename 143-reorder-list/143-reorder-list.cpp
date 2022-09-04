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
    void reorderList(ListNode* head) {
        if(head==NULL)
            return;
        if(head->next==NULL)
            return;
        if(head->next->next==NULL)
        {
            return;
        }
        ListNode* slow = head;
        ListNode* fast = head->next->next;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow=slow->next;
        ListNode* cur = slow->next;
        slow->next = NULL;
        
        ListNode* prev = NULL;
        ListNode* forward = NULL;
        
        while(cur)
        {
            forward = cur->next;
            cur->next = prev;
            prev = cur;
            cur = forward;
        }
        
        ListNode* head2 = prev;
        ListNode* head1 = head;

        while(head2)
        {
            ListNode* ptr1 = head1->next;
            ListNode* ptr2 = head2->next;
            
            head1->next = head2;
            head2-> next = ptr1;
            
            head1= ptr1;
            head2= ptr2;
        }
    }
    
};