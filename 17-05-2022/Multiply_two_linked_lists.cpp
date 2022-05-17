long long  MOD = 1000000007;
long long mod_multi(long long a,long long b)
{
    return ((a%MOD)*(b%MOD))%MOD;
}
long long  multiplyTwoLists (Node* list1, Node* list2)
{
  //Your code here
        string s="",s1="";
        long long count = 0,count1=0;
        Node* p = list1;
   
        while(p != NULL)
        {
            count = (count*10)%MOD + p->data;
            p = p->next;
        }
        Node* q = list2;
   
        while(q != NULL)
        {
            count1 = (count1*10)%MOD + q->data;
            q = q->next;
        }
        
        
        return mod_multi(count,count1);
}
