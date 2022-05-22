class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum=0,count=0,index=0;
        for(int i=0;i<gas.size();i++)
        {
            int temp=gas[i]-cost[i];
            sum+=temp;
            count+=temp;
            if(count<0)
            {
                index=i+1;
                count=0;
            }
        }
        if(sum>=0)
        {
            return index;
        }
        return -1;
    }
};
