class Solution {
public:
    
    void subset(vector<int>& nums,int i, vector<vector<int>>&ans,vector<int> &res)
    {
        //Base condition
        if(i==nums.size())
        {
            ans.push_back(res);
            return ;
        }
        int currentval=nums[i];
        res.push_back(currentval);
        subset(nums,i+1,ans,res);
        res.pop_back();
        subset(nums,i+1,ans,res);
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        
        vector<int>res;
        
        subset(nums,0,ans,res);
        return ans;
    }
};