class Solution {
public:
    string sortSentence(string s)
    {
       map<int,string> mp;
        
        string temp;
        
        
        
        for(auto i:s)
        {
            if(isdigit(i))
             mp[i]=temp;
            
            else if(i==' ')
            {
                temp="";
            }
            else
            {
                temp+=i;
            }
            
        }
        
        string ans;
        
        for(auto x:mp)
        {
            ans+=x.second+" ";
        }
        ans.pop_back();
        
        return ans;
    }
};