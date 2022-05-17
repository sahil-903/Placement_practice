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
    ListNode* reverseList(ListNode* head) {
        ListNode *dummy = new ListNode(), *cur=head;
        dummy->next=head;
        while (cur && cur->next) {
            ListNode* temp = dummy -> next;
            dummy -> next = cur -> next;
            cur -> next = cur -> next -> next;
            dummy -> next -> next = temp;
        }
        return dummy -> next;
    }
};
