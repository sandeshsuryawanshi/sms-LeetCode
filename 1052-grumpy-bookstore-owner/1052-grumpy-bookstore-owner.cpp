class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes)
    {
       
        int j=0;
        int n=customers.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(grumpy[i]==0)
            {
                sum+=customers[i];
            }
        }
        cout<<sum;
        int i=0;
        int ans=0;
        while(j<n)
        {
            if(grumpy[j]==1)
            {
                sum+=customers[j];
            }
            if(j-i+1==minutes)
            { 
                 ans=max(ans,sum);
                
                 if(grumpy[i]==1)
                 {
                     sum-=customers[i];
                    
                 }
               i++;
            }
              j++;
        }
        
        return ans;
    }
};