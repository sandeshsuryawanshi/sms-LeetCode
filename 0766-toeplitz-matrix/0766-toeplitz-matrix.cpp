class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& arr) 
    {
        int n=arr.size();
        int m=arr[0].size();
        
        for(int i=0;i<=n-2;i++)
        {
            for(int j=0;j<=m-2;j++)
            {
                if(arr[i][j]!=arr[i+1][j+1])
                {
                    return false;
                }
            }
        }
        return true;
    }
};