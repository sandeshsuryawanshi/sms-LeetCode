class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2)
    {
       map<string,int>mp;
        for(int i=0;i<words1.size();i++)
        {
            mp[words1[i]]++;
        }
         map<string,int>mp1;
        for(int i=0;i<words2.size();i++)
        {
            mp1[words2[i]]++;
        }
        int counter=0;
        for(int i=0;i<words2.size();i++)
        {
             if(mp.find(words2[i])!=mp.end() and mp[words2[i]]==1 and mp1[words2[i]]==1)
             {
                 counter++;
             }
        }
        return counter;
    }
};