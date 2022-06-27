int tour(petrolPump p[],int n)
    {
       //Your code here
        int sumP=0 , sumD=0;
        for(int i=0;i<n ;i++)
        {
            sumP += p[i].petrol;
            sumD += p[i].distance ;
        }
        if(sumP<sumD)
            return -1;
          
        int index = -1 , diff = 0;  
        for(int i=0;i<n ;i++)
        {
            if(index==-1) 
                index = i;
            diff += p[i].petrol - p[i].distance ;
            if(diff < 0)
            {
                index = -1;
                diff = 0;
            }
    
        }
        return index;
    }
