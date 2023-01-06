class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        
        double sum=0;
        int i=0,j=0;
        double value=INT_MIN;
        while(j<nums.size())
        {
            sum=sum+nums[j];
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                double value2=sum/k;
                value=max(value,value2);
                
                sum=sum-nums[i];
                i++;
                j++;
            }
        }
        return value;
    }
};