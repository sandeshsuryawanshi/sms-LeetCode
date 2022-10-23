class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums)
    {
        
        map<int,int>mp;
        vector<int>v;
        
        for(auto i:nums)
        {
            mp[i]+=1;
            if(mp[i]==2)
            {
                v.push_back(i);
            }
        }
        
        
        for(int i=1;i<=nums.size();i++)
        {
            if(find(nums.begin(),nums.end(),i)==nums.end())
            {
                v.push_back(i);
                break;
            }
        }
            
            return v;
        
    }
};