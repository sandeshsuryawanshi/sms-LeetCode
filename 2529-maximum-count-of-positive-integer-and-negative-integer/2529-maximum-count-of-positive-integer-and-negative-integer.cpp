class Solution {
public:
    int maximumCount(vector<int>& nums) 
    {
        int p=0,n=0,maxi=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0) n++;
            else if(0<nums[i]) p++;
        }
        maxi=max(p,n);
        return maxi;
    }
};