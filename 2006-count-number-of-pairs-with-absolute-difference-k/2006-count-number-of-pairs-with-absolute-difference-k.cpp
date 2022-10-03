class Solution {
public:
    int countKDifference(vector<int>& nums, int k)
    {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++ )
            {
                int k1=nums[i]-nums[j];
                
               if(abs(k1)==k)
               {
                   count++;
               }
            }
        }
        return count;
    }
};