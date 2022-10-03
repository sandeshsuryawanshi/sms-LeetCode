class Solution {
public:
    bool findSubarrays(vector<int>& nums)
    {
        
        vector<int>v;
        map<int,int>mp;
        for(int i=0;i<nums.size()-1;i++)
        {
           int sum=nums[i]+nums[i+1];
            
            v.push_back(sum);
            
        }
        for(int i=0;i<v.size();i++)
        {
            mp[v[i]]++;
        }
        for(auto x:mp)
        {
            if(x.second>1)
            {
                return true;
            }
        }
        return false;
    }
};