class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat)
    {
        int n=mat.size()-1;
        
        int sum=0;
       int val=n/2;
        for(int i=0;i<=n;i++)
        {
            
            for(int j=0;j<=n;j++)
            {
               
                
              
                    if(j==i || j==n-i)
                    {
                        sum+=mat[i][j];
                    }
                
            }
        }
        return sum;
    }
};