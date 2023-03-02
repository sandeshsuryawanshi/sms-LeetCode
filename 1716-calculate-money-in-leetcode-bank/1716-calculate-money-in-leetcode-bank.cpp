class Solution {
public:
    int totalMoney(int n)
    {
        if(n<7)
        {
            int s=0;
            for(int i=1;i<=n;i++)
            {
                s+=i;
            }
            return s;
        }
        int k=n%7;
    	int k1=n/7;
         int ans=0;
         int sum=28;
         
    	for(int i=0;i<k1;i++)
    	{
    	    ans+=sum;
    	    sum+=7;
    	    
		} 
		k1++;
		for(int i=0;i<k;i++)
		{
	      ans+=k1;
	      k1++;
		}
		  
		return ans;
    }
};