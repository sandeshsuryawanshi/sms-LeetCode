class Solution {
public:
    int findDelayedArrivalTime(int a, int d)
    {
        int ans=a+d;
        
         if(ans==24)
              return 0;
        
        if(ans>24)
            ans=ans-24;
        return ans;
    }
};