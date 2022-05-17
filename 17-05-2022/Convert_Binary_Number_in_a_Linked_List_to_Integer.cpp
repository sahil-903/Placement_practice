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
    int getDecimalValue(ListNode* head) {
        int count=-1,i=0;
        ListNode *lst = head;
        while(head!=NULL)
        {
            count++;
            head=head->next;
        }
        // cout<<count<<endl;
        while(lst!=NULL)
        {
            if(lst->val==0)
            {
                count--;
                lst=lst->next;
            }
            else
            {
                lst=lst->next;
                i+=pow(2,count);
                // cout<<count<<endl;
                count--;
            }
        }
        return i;
    }
};
