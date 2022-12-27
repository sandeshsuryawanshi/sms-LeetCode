class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals)
    {
       int n = intervals.size();
     if(n==1) 
         return {-1};
        
        map<int, int> mp;
        
        for(int i=0; i<n; i++){
            mp[intervals[i][0]] = i;
        }
        
        // MAP ENTERIES
        // 1 -> 2
        // 2 -> 1
        // 3 -> 0
        
        vector<int> ans;
        for(int i=0; i<n; i++){
            
            int end = intervals[i][1];
            
            auto it = mp.lower_bound(end); //as start is unique, val returned is rgt interval
            
            if(it == mp.end())
                ans.push_back(-1);
            
            
            else ans.push_back(it->second);
            
        }
        return ans;
    }
};