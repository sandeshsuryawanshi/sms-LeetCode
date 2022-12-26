class Solution {
public:
    bool canJump(vector<int>& nums)
    {
        int mx=0;
        for(int i=0;i<nums.size();i++)
        {
            mx=max(mx,i+nums[i]);
            if(mx<i+1)
            break;
        }
        if(mx>=nums.size()-1) return true;
        else return false;
        
    }
};