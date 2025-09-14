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
    ListNode* oddEvenList(ListNode* head) {
        if(!head||!head->next) return head;
        ListNode* even=head,*odd=head->next,*temp1=head,*temp2=head->next;
        while(temp1->next && temp2->next)
        {
            temp1->next=temp2->next;
            temp1=temp2->next;
            temp2->next=temp1->next;
            temp2=temp1->next;
        }    
        temp1->next=odd;
        return head;
    }
};