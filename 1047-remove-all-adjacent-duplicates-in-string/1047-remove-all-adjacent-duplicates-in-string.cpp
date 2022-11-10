class Solution {
public:
    string removeDuplicates(string s)
    {
        
        
        stack<char>s2;
        for(int i=0;i<s.size();i++)
        {
            if(s2.size()==0)
            {
                s2.push(s[i]);
            }
            else
            {
                if(s2.top()==s[i])
                {
                    s2.pop();
                }
                else
                {
                    s2.push(s[i]);
                }
            }
        }
        
        string ans="";
        while(!s2.empty())
        {
            ans+=s2.top();
           s2.pop();
        }
         reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};