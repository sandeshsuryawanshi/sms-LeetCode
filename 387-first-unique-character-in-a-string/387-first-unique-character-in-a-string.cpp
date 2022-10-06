class Solution {
public:
    int firstUniqChar(string s) 
    {
        map<char,int>mp;
        
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])!=mp.end())
            {
                if(mp[s[i]]==1)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};