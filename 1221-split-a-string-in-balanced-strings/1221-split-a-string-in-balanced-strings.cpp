class Solution {
public:
    int balancedStringSplit(string s)
    {
        int counter=0;
        char c=s[0];
        int cn=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==c)
            {
                cn++;
            }
            else
            {
                cn--;
                if(cn==0)
                {
                    counter++;
                    c=s[i+1];
                }
            }
        }
        return counter;
    }
};