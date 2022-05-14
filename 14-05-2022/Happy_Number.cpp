class Solution {
public:
    bool isHappy(int n) {
        while(n!=1)
        {
            
            string temp=to_string(n);
            if(temp.size()==1 && (temp=="2" || temp=="3" || temp=="4"))
            {
                return false;
            }
            n=0;
            for(int i=0;i<temp.size();i++)
            {
                int temp1=temp[i]-'0';
                n+=(temp1*temp1);
            }
        }
        return true;
    }
};
