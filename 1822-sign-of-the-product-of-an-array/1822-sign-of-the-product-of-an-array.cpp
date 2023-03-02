class Solution {
public:
    int arraySign(vector<int>& nums) 
    {
      double sum=1;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]==0)
           { 
            return 0;
            }
            sum=sum*nums[i];
        }
        
        if(sum<0)
        {
            return -1;
        }
       return 1;
    }
};