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
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> v;
        set<int> v1;
        ListNode *curr=head;
        map<int,int> mp; 
        while(curr!=NULL)
        {
            v1.insert(curr->val);
            mp[curr->val]++;
            curr=curr->next;
        }
        ListNode* newhead=new ListNode(0);
        curr=newhead;
        for(auto x: mp)
        {
            if(x.second==1)
            {
                curr->next=new ListNode(x.first);
                curr=curr->next;
            }
        }
        curr->next=NULL;
        
        return newhead->next;
    }
};
