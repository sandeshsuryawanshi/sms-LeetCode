class Solution {
public:
    void toGenerateParenthesis(int open,int close,string ans,vector<string>&res,int n)
    {
        if(ans.size()==2*n)
        {
            res.push_back(ans);
        }
        if(open<n) toGenerateParenthesis(open+1,close,ans+'(',res,n);
        if(close<open) toGenerateParenthesis(open,close+1,ans+')',res,n);
    }
       
    vector<string> generateParenthesis(int n)
    {
        vector<string>res;
        
         toGenerateParenthesis(0,0,"",res,n);
          return res;
    }
};