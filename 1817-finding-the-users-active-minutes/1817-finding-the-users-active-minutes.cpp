class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) 
    {
       unordered_map<int,set<int>>mp;
        
        vector<int>ans(k,0); //assign vector all the zero
        
        for(vector<int>log : logs)
        {
            mp[log[0]].insert(log[1]);
        }
        
        for(auto x:mp)
        {
            int z= x.second.size();
            
            ans[z-1]++;
        }
        return ans;
    }
};
