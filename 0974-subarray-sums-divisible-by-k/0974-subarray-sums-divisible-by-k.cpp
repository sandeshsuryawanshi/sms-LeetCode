class Solution 
{
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        vector<int> map(k, 0);
        map[0] = 1;
        int count = 0, sum = 0;
        for (int num : nums) 
        {
            sum = (sum + num) % k;
            if (sum < 0) sum += k;  // In case the remainder is negative
            count += map[sum];
            map[sum]++;
        }
        return count;
    }
};
