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
    ListNode* removeElements(ListNode* head, int val1) {
        
         while(head!=nullptr && head->val==val1){
            head = head->next;
        }
        ListNode* cur=head;
        while(cur!=NULL)
        {
            if(cur->next && cur->next->val==val1)
            {
                cur->next=cur->next->next;
            }
            else
            {
                cur=cur->next;
            }
        }
        return head;
    }
};
