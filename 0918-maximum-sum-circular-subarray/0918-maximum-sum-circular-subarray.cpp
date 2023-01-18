class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) 
    {
            int n = nums.size();
    int maxSumEndingHere = nums[0], minSumEndingHere = nums[0];
    int maxSum = nums[0], minSum = nums[0];
    for (int i = 1; i < n; i++) {
        maxSumEndingHere = max(maxSumEndingHere + nums[i], nums[i]);
        minSumEndingHere = min(minSumEndingHere + nums[i], nums[i]);
        maxSum = max(maxSum, maxSumEndingHere);
        minSum = min(minSum, minSumEndingHere);
    }
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int nonCircularMax = maxSum;
    if(totalSum != minSum)
        nonCircularMax = max(nonCircularMax, totalSum - minSum);
    return nonCircularMax;

        
    }
};