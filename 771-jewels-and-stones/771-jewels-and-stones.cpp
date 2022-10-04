class Solution {
public:
    int numJewelsInStones(string jewels, string stones)
    {
        int maxi=0;
        
        map<char,int>mp;
        
        for(int i=0;i<stones.size();i++)
        {
            mp[stones[i]]++;
        }
        
       int counter=0;
        int flag=0;
        for(int i=0;i<jewels.size();i++)
        {
            if(mp.find(jewels[i])!=mp.end())
            {
                
               counter=counter+mp[jewels[i]];
                flag=1;
            }
        }
        if(flag==1)
                return counter;
        
        else
            return 0;
    }
};