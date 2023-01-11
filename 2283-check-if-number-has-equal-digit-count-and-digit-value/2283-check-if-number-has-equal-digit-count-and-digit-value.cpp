class Solution {
public:
    bool digitCount(string nums)
     {
        
        vector<char>v;
        map<char,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int p= int(nums[i]) - 48;
            mp[p]++;
            v.push_back(p);
            
        }
        
        int flag=0;
        for(int i=0;i<v.size();i++)
        {
           
            
                if(mp[i]==v[i])
                {
                    continue;
                }
                else
                {
                    return false;
                }
            
                
        }
       return true;
     }
};