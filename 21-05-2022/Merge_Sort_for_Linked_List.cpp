class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* merge(Node* head1, Node* head2)
 {
      Node* res = NULL;
      
      if(head1 == NULL) return head2;
      if(head2 == NULL) return head1;
      
      if(head1 -> data <= head2 -> data)
      {
          res= head1;
          res -> next = merge(head1 -> next, head2);
      }
      else
      {
          res= head2;
          res -> next = merge(head1, head2 -> next);
      }
      
      return res;
     
 }

   //Function to sort the given linked list using Merge Sort.
   Node* mergeSort(Node* head) 
   {
    if(head == NULL or head -> next == NULL) return head;
     
     Node* slow = head;
     Node* fast = head -> next;
     
     while(fast != NULL and fast -> next != NULL)
     {
         slow = slow -> next;
         fast = fast -> next -> next;
     }
    
     Node* mid = slow;
     Node* left = head;
     Node* right = mid -> next;
     mid -> next = NULL;
    
     left = mergeSort(left);
     right = mergeSort(right);
     
     head = merge(left, right);
     return head;
   }
};
