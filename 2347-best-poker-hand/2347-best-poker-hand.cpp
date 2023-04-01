class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) 
    {
     map<int,int>mp;
        for(auto x:suits)
        {
            mp[x]++;
        }
        map<char,int>m;
        for(auto x:ranks)
        {
            m[x]++;
        }
        for(auto [u,v]:mp)
        {
            if(v==5)
            {
                return "Flush";
            }
            
        }
        for(auto [u,v]:m)
        {
            if(v>=3)
            {
                return "Three of a Kind";
            }
           
        }
          for(auto [u,v]:m)
        {
            if(v==2)
            {
                return "Pair";
            }
           
        }
        return "High Card";
    }
};