class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid)
    {
        for(auto& row : grid)
            sort(row.begin(),row.end());
        
        int res=0;
        for(size_t i=0; i<grid[0].size(); ++i) {
            int maxi=0;
            for(size_t j=0; j<grid.size(); ++j)
                maxi = max(maxi, grid[j][i]);
            res += maxi;
        }

        return res;
    }
};