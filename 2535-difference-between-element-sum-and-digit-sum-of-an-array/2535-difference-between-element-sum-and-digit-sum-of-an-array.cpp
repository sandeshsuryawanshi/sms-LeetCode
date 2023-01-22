class Solution {
public:
    int func(int number)
    {
        int sum=0;
        
        while(number>0)
        {
            int r=number%10;
            sum+=r;
            number/=10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) 
    {
        int sum=accumulate(nums.begin(), nums.end(), 0);
        
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int k=func(nums[i]);
            ans+=k;
        }
        
        return abs(sum-ans);
    }
};