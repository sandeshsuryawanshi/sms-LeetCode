class Solution {
public:
    char repeatedCharacter(string s)
    {
        char k;
        
        map<char,int>mp;
        
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]==2)
            {
                k=s[i];
                break;
            }
        }
        return k;
    }
};