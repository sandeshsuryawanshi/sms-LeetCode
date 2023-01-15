class Solution {
public:
    int countVowelStrings(int n) 
    {
        vector<int>ans(5,1);  // 5 size of array ans assign value for each index from 0 to 5-1
        
        for(int i=2;i<=n;i++)
        {
            for(int j=3;j>=0;j--)
            {
                ans[j]+=ans[j+1];
                
            }
        }
        
        return accumulate(ans.begin(),ans.end(),0);
        
        
        
        
    }
};