class Solution {
public:
     int dp[51][51];
     int solve(int n,int i)
     {
         if(n==0)
         {
             return 1;
         }
         if(dp[n][i]!=-1)
         {
             return dp[n][i];
         }
         if(i>=5)
         {
             return 0;
         }
         return dp[n][i]= solve(n-1,i)+solve(n,i+1);
     }
    int countVowelStrings(int n) 
    {
//         vector<int>ans(5,1);  // 5 size of array ans assign value for each index from 0 to 5-1
        
//         for(int i=2;i<=n;i++)
//         {
//             for(int j=3;j>=0;j--)
//             {
//                 ans[j]+=ans[j+1];
                
//             }
//         }
        
//         return accumulate(ans.begin(),ans.end(),0); // it can calculate the sum from 0 to 5-1 of the vector
        
         
        
        memset(dp,-1,sizeof(dp));
       
    return solve(n,0);
        
    }
};