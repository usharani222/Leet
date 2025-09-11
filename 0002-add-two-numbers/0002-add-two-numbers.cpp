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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *t1=l1,*t2=l2;
        ListNode *head=new ListNode(0);
        ListNode *temp=head;
        int carry=0;
        while(t1&&t2)
        {
            int res=t1->val+t2->val;
            res+=carry;
            carry=res/10;
            temp->next=new ListNode(res%10);
            temp=temp->next;
            t1=t1->next;
            t2=t2->next;
        }    
        while(t1)
        {
            int res=t1->val;
            res+=carry;
            carry=res/10;
            temp->next=new ListNode(res%10);
            temp=temp->next;
            t1=t1->next;
        }
        while(t2)
        {
            int res=t2->val;
            res+=carry;
            carry=res/10;
            temp->next=new ListNode(res%10);
            temp=temp->next;
            t2=t2->next;
        }
        if(!t1 && !t2 && carry) temp->next=new ListNode(1);
        return head->next;
    }
};