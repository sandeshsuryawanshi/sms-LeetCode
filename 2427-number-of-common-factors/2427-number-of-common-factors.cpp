class Solution {
public:
    int commonFactors(int a, int b)
    {
        int maxi=max(a,b);
        
      int counter=0;
        for(int i=1;i<=maxi;i++)
        {
            if(a%i==0 and b%i==0)
            {
                counter++;
            }
        }
        return counter;
    }
};