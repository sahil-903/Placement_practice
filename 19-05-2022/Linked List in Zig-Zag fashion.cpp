class Solution
{
    public:
    Node *zigZag(Node* head)
    {
     // your code goes here
     if(head == NULL || head->next == NULL) {
      return head;
    }
    
    Node* node = head;
    bool flag = true;
    
    while(node->next != NULL) {
      if(flag) {
        if(node->data > node->next->data) {
          int t = node->data;
          node->data = node->next->data;
          node->next->data = t;
        }
        flag = !flag;
      } else {
        if(node->data < node->next->data) {
          int t = node->data;
          node->data = node->next->data;
          node->next->data = t;
        }
        flag = !flag;
      }
      
      node = node->next;
    }
    
    return head;
    }
};
