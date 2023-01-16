class Solution {
public:
    int getMaximumGenerated(int n)
    {
        if(n==0 || n==1)
        {
            return n;
        }
        vector<int> ans;
        
        
        ans.push_back(0);
         ans.push_back(1);
        int mx=1;
        
        for(int i=2;i<=n;i++)
        {
            if(i%2==0)
            {
                ans.push_back(ans[i/2]);
                
            }
            
            else
            {
                ans[i]= ans[i/2] + ans[i/2+1];
                
                 
               ans.push_back(ans[i]);
                
               
            }
        }
        
        
     mx= *max_element(ans.begin(),ans.end());
        return mx;
    }
};