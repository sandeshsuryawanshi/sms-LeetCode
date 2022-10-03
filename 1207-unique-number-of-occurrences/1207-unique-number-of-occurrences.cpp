class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        
        map<int,int>mp,res;
        
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        
        for(auto x:mp)
        {
            res[x.second]++;
        }
        for(auto x1:res)
        {
            if(x1.second>1)
            {
                return false;
            }
        }
        return true;
        
    }
};