class Solution {
public:
    int findMaxK(vector<int>& nums)
    {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            
            mp[nums[i]]++;
            
        }
        int maxi=INT_MIN;
        int flag=0;
        for(int i=0;i<nums.size();i++)
        {
             if(nums[i]>0)
             {
                 int k=nums[i]*-1;
                 if(mp.find(k)!=mp.end())
                 {
                     maxi=max(maxi,nums[i]);
                     flag=1;
                 }
             }
        }
        
        if(flag==0)
        {
            return -1;
        }
        else
        {
            return maxi;
        }
    }
};