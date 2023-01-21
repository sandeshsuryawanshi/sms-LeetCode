class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) 
    {
       if(nums.size()==1)
       {
           return nums[0];
           
       }
        
        int sum=0;
        int maxi=0;
        map<int,int>mp;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            sum+=nums[i];
            
             while(mp[nums[i]]>1)
             {
                 mp[nums[j]]--;
                 sum-=nums[j];
                 j++;
             }
            maxi=max(maxi,sum);
            
        }
        return maxi;
    }
};