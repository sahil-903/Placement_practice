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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int count=0;
        while(curr!=NULL)
        {
            count++;
            curr=curr->next;
        }
        int index=0;
        ListNode* curr1=head,*prev=head;
        while(curr1!=NULL)
        {
            if(count-index==n)
            {
                if(index==0)
                {
                    head=prev->next;
                }
                prev->next=curr1->next;
                break;
            }
            index++;
            prev=curr1;
            curr1=curr1->next;
        }
        return head;
    }
};
