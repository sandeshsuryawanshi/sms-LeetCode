class Solution {
public:
    int findFinalValue(vector<int>& nums,int k)
    {
        
        map<int,int>mp;
        for(auto x:nums)
        {
            mp[x]++;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(k)!=mp.end())
            {
                k=k*2;
                
            }
            else
            {
                break;
            }
        }
        return k;
        
    }
};