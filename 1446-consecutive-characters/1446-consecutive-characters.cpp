class Solution {
public:
    int maxPower(string s)
    {
        int counter=1;
        int maxi=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s[i+1])
            {
                counter++;
            }
            else
            {
                if(maxi<counter)
                {
                    maxi=counter;
                }
                counter=1;
            }
        }
        return maxi;
    }
};