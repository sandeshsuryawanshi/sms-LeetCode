class Solution {
public:
       int  dp[48];
    int trio(int n)
    {
        if(n == 0)return 0;
        if(n == 1 || n == 2)return 1;
         
        if(dp[n]!=-1)
            return dp[n];
        
        return dp[n]=trio(n-1) + trio(n-2) + trio(n-3);
    }
    
    int tribonacci(int n) 
    {
         memset(dp,-1,sizeof(dp));
        return trio(n);
    }
};