
class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
    long ans = 0;
    long res = 0;
    for(int i = 0;i<nums.size();i++){
        ans += nums[i];
        res = max(res, (ans+i)/(i+1));
        cout<<res;
    }
    return res;
    }
};