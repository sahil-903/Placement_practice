Node* segregate(Node *head) {
       
       // Add code here
       int ZeroCnt = 0;
       int OneCnt = 0;
       int TwoCnt = 0;
       
       Node* temp = head;
       while(temp != NULL){
           if(temp -> data == 0)
           ZeroCnt++;
           
           else if(temp -> data == 1)
           OneCnt++;
           
           else if(temp -> data == 2)
           TwoCnt++;
           
           temp = temp -> next;
       }
       
       temp = head;
       
       while(temp != NULL) {
           if(ZeroCnt != 0){
           temp -> data = 0;
           ZeroCnt--;
           }
           
           else if( OneCnt != 0){
           temp -> data = 1;
           OneCnt--;
           }
           
           else if(TwoCnt != 0){
           temp -> data = 2;
           TwoCnt--;
           }
           temp  = temp -> next;
       }
       return head;
   }
