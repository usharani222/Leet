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
    int decimal(vector<int> v)
    {
        int n=v.size()-1,j=0,sum=0;
        for(int i=n;i>=0;i--)
        {
            if(v[i]==1) sum+=pow(2,j);
            j++;
        }
        return sum;
    }
    int getDecimalValue(ListNode* head) 
    {
        vector<int> v;
        while(head)
        {
            v.push_back(head->val);
            head=head->next;
        }
        return decimal(v);
    }
};