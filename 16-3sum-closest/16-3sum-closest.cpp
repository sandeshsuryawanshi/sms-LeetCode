class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        sort(nums.begin(),nums.end());
        int temp = 0,sum = 0,n=nums.size();
        int minDist = INT_MAX;
        
        for(int i=0;i<n-2 ; i++)
        {
            int l = i+1 , r = n-1;
            while(l<r)
            {
                temp = nums[i] + nums[l] + nums[r];
                
                if(abs(temp-target)<minDist)
                {
                    minDist = abs(temp-target);
                    sum = temp;
                }
                
                if(temp<target)
                    l++;
                
                else
                    r--;
            }
        }
        return sum;
    }
};