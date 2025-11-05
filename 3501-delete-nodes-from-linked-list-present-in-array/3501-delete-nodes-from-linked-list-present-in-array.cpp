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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int> s(nums.begin(),nums.end());
        vector<int> ans,res;
        ListNode *temp=head;
        while(temp) {ans.push_back(temp->val);  temp=temp->next;}
        for(int i:ans) if(s.find(i)==s.end()) res.push_back(i);
        ListNode *t=head;  
        int i=0;
        while(i<res.size()&&t)
        {
            t->val=res[i++];
            if(i==res.size()) t->next=NULL;
            else t=t->next;
        }
        return head;
    }
};
