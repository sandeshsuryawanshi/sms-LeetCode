class Solution {
public:
    int mostFrequentEven(vector<int>& nums) 
    {
        
        map<int,int>mp;
        
        int maxi=-1;
        int number=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                mp[nums[i]]++;
            }
        }
        for(auto x:mp)
        {
            if(x.second>maxi)
            {
                maxi=x.second;
                number=x.first;
            }
        }
        return number;
    }
};