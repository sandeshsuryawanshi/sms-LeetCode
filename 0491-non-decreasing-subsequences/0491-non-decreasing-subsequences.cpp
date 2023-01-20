class Solution {
public:
    set<vector<int>>s;
    void solve(vector<int> &nums,int pre,int i,vector<int> &v)
    {
        
        //Base Condition
        if(i==nums.size())
        {
            if(v.size()>=2)
            {
                s.insert(v);
            }
            return ;
        }
        if(nums[i]>=pre)
        {
            v.push_back(nums[i]);
            solve(nums,nums[i],i+1,v);
            v.pop_back();
        }
        solve(nums,pre,i+1,v);
        
    }
    vector<vector<int>> findSubsequences(vector<int>& nums)
    {
        vector<int>v;
        s.clear();
        vector<vector<int>> ans;
        solve(nums,-101,0,v);
        
        for(auto x:s)
        {
            ans.push_back(x);
        }
        return ans;
    }
};