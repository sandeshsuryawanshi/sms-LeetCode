class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2)
    {
        map<char,int>mp,mp2;
        for(int i=0;i<word2.size();i++)
        {
            mp[word2[i]]++;
        }
         for(int i=0;i<word1.size();i++)
        {
            mp2[word1[i]]++;
        }
        for(int i=0;i<word1.size();i++)
        {
            int k=mp2[word1[i]];
            
            int p=mp[word1[i]];
            
            int result=abs(p-k);
            
             int k1=mp2[word2[i]];
            
            int p1=mp[word2[i]];
            
            int result1=abs(p1-k1);
            if(result>3 || result1>3)
            {
                return false;
            }
            
        }
        return true;
    }
};