class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& first, vector<vector<int>>& second) {
        
        vector<vector<int>> ans;
        
          
        int n=first.size();
        int m=second.size();
        int i=0;
        int j=0;
        while(i<n and j<m)
        {
            int x=max(first[i][0],second[j][0]);
            int y=min(first[i][1],second[j][1]);
            
            if(x<=y)
            {
            ans.push_back({x,y});
            }
            if(first[i][1]>second[j][1])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
};