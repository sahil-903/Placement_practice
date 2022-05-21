int getLength(Node *head)
{
   int size=0;
   while(head!=NULL)
   {
       size++;
       head = head->next;
   }
   return size;
}

Node *appendZeros(Node *sNode, int len)
{
   if(sNode==NULL)
       return NULL;
       
   Node *newHead = new Node(0);
   len--;
   Node *temp = newHead;
   while(len--)
   {
       temp->next = new Node(0);
       temp = temp->next;
   }
   temp->next = sNode;
   return newHead;
}

Node* reverse(Node *head)
{
   Node *curr=head , *prev=NULL;
   while(curr!=NULL)
   {
       Node *next=curr->next;
       curr->next=prev;
       prev=curr;
       curr=next;
   }
   return prev;
}

Node* skipInitialZeros(Node *head)
{
   while(head!=NULL && head->data==0)
       head = head->next;
       
   return head;
}

Node* subtractUtil(Node* lNode, Node* sNode, bool &borrow)
{
   lNode = reverse(lNode);
   sNode = reverse(sNode);
   Node *head = NULL , *prev = NULL;
   
   while(lNode!=NULL && sNode!=NULL)
   {
       int d1 = lNode->data;
       int d2 = sNode->data;
       int sub = 0;
   
       if(borrow)
       {
           d1--;
           borrow = false;
       }
   
       if(d1<d2)
       {
           borrow = true;
           d1 = d1+10;
       }
   
       sub = d1-d2;
       
       Node *curr = new Node(sub);
       
       if(head==NULL)
       {
           head = curr;
           prev = curr;
       }
       else
       {
           prev->next = curr;
           prev = prev->next;
       }
       
       lNode = lNode->next;
       sNode = sNode->next;
   }
   
   head = reverse(head);
   head = skipInitialZeros(head);
   
   return head;
}

Node* subLinkedList(Node* l1, Node* l2)
{
   //Your code here
   if(l1==NULL && l2==NULL)
       return NULL;
       
   l1 = skipInitialZeros(l1);
   l2 = skipInitialZeros(l2);
       
   int len1 = getLength(l1);
   int len2 = getLength(l2);
   
   if(len1==0)
       return l2;
   if(len2==0)
       return l1;
   
   Node *sNode=NULL , *lNode=NULL;
   Node *temp1 = l1 , *temp2 = l2;
   
   if(len1!=len2)
   {
       sNode = (len1>len2) ? l2 : l1;
       lNode = (len1>len2) ? l1 : l2;
       sNode = appendZeros(sNode,abs(len1-len2));
   }
   else
   {
       while(l1!=NULL && l2!=NULL)
       {
           if(l1->data != l2->data)
           {
               lNode = (l1->data>l2->data) ? temp1 : temp2;
               sNode = (l1->data>l2->data) ? temp2 : temp1;
               break;
           }
           l1 = l1->next;
           l2 = l2->next;
       }
   }
   
   if(lNode==NULL && sNode==NULL)
       return new Node(0);
       
   bool borrow = false;
   return subtractUtil(lNode,sNode,borrow);
}
