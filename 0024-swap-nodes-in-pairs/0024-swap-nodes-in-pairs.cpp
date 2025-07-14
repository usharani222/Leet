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
    ListNode* swapPairs(ListNode* head) 
    {
        vector<int> v;
        ListNode* temp=head;
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        int j=0;
        while(j+1<v.size())
        {
            swap(v[j],v[j+1]);
            j+=2;
        }
        temp=head;
        int i=0;
        while(temp)
        {
            temp->val=v[i];
            temp=temp->next;
            i++;
        }
        return head;
    }
};