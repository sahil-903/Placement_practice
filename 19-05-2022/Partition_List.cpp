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
    ListNode* partition(ListNode* head, int x) {
        vector<int> v,v1;
        ListNode *curr=head;
        while(curr!=NULL)
        {
            if(curr->val<x)
                v.push_back(curr->val);
            else
                v1.push_back(curr->val);
            curr=curr->next;
        }
        curr=head;
        for(int i=0;i<v.size();i++)
        {
            curr->val=v[i];
            curr=curr->next;
        }
        for(int i=0;i<v1.size();i++)
        {
            curr->val=v1[i];
            curr=curr->next;
        }
        return head;
        
    }
};
