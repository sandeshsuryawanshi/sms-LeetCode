class Solution {
public:
    bool areOccurrencesEqual(string s)
    {
        map<char,int>mp;
        
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        int k=mp[s[0]];
        
        for(auto x:mp)
        {
            if(x.second!=k)
            {
                return false;
            }
        }
        return true;
    }
};