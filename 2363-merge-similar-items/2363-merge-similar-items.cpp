class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& item1, vector<vector<int>>& item2) 
    {
        vector<vector<int>> ans;
         
      map<int,int>mp;
        
        for(int i=0;i<item1.size();i++)
        {
            mp[item1[i][0]]=item1[i][1];
        }
        
        for(int i=0;i<item2.size();i++)
        {
            mp[item2[i][0]]+=item2[i][1];
        }
        
        
        for(auto x:mp)
        {
            ans.push_back({x.first,x.second});
        }
        
        return ans;
        
        
    }
    
};