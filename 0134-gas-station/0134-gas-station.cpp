class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
    {
        
        
        int gsize=gas.size();
        int gsum=0;
        int csum=0;
        
        for(int i=0;i<gsize;i++)
        {
            gsum+=gas[i];
            csum+=cost[i];
        }
        if(gsum<csum)
        {
            return -1;
        }
        
        int cur=0;
         int index=0;
        for(int i=0;i<gsize;i++)
        {
            if(cur<0)
            {
                cur=0;
                index=i;
            }
            
            cur+=(gas[i]-cost[i]);
        }
        return index;
    }
};