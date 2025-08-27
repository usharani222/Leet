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
    ListNode* reverseList(ListNode* head) 
    {
        ListNode *temp=head,*fut=NULL,*prev=NULL;
        while(temp)
        {
            fut=temp->next;
            temp->next=prev;
            prev=temp;
            temp=fut;
        }
        return prev;
    }
};