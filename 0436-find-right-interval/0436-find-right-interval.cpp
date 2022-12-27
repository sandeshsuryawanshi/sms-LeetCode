class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals)
    {
        map<int,int> mp;
        
        int n=intervals.size();
        
        vector<int>result(n,-1);
        
        for(int i=0;i<n;i++)
        {
            mp[intervals[i][0]]=i;
            
        }
        
        for(int i=0;i<n;i++)
        {
            int end_i= intervals[i][1];
            
            auto end_j= mp.lower_bound(end_i);
            
            if(end_j!=end(mp))
            {
                result[i]= end_j->second;
            }
        }
        return result;
    }
};