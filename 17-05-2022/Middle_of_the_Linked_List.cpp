// My logic code

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
    ListNode* middleNode(ListNode* head) 
    {
        int count=1;
        ListNode* temp;
        temp=head;
        while(temp->next!=NULL)
        {
            count++;
            temp=temp->next;
        }
        int index=0;
        while(index<count/2)
        {
            index++;
            head=head->next;
        }
        return head;
	}
};

// using two pointer but less efficent

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
    ListNode* middleNode(ListNode* head) 
    {
        if(head == NULL)
            return head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
	}
};
