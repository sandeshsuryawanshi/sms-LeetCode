class Solution {
public:
    string oddString(vector<string>& words)
    {
        map<vector<int>,vector<int>>mp;
         for(int i=0;i<words.size();i++)
         {
             vector<int>v;
             for(int j=0;j<words[i].size()-1;j++)
             {
                 v.push_back(words[i][j+1] - words[i][j]);
             }
             mp[v].push_back(i);
         }
        
        for(auto x:mp)
        {
            if(x.second.size()==1)
            {
              return words[x.second[0]];
               
                
            }
        }
        return 0;
    }
};