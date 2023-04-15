class Solution {
public:
    bool isAnagram(string s, string t)
    {
        int n=s.size();
        int m1=t.size();
        if(n!=m1)
        {
            return false;
        }
        map<char,int>mp,m;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
             m[t[i]]++;
        }
        if(m==mp)
            return true;
        
        return false;
    }
};