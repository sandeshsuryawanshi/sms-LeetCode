class Solution {
public:
    int countGoodSubstrings(string s)
    {
      int k=0;
        int j=1;
        int counter2=0;
        for(int i=2;i<s.size();i++)
        {
            if(s[k]!=s[j] and s[k]!=s[i] and s[j]!=s[k] and s[j]!=s[i])
            {
                counter2++;
            }
            k++;
            j++;
        }
        
        return counter2;
    }
};