class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g)
    {
        vector<vector<int>>ans;
        
        map<int,int>mp;
        for(int i=0;i<g.size();i++)
        {
            mp[g[i]]++;
        }
        for(auto x:mp)
        {
            int k=x.first;
            int p=x.second;
            vector<int>v;
            
            int counter=0;
            for(int i=0;i<g.size();i++)
            {
                if(g[i]==k and p==1)
                {
                    v.push_back(i);
                        break;
                }
                if(g[i]==k and p>1 and p!=1)
                {
                    v.push_back(i);
                    counter++;
                    if(counter==k)
                    {
                        ans.push_back(v);
                        counter=0;
                        v.clear();
                    }
                }
            }
           if(v.size()!=0 and v.size()<3 and p<3)
           {
               ans.push_back(v);
           }
            if(v.size()==1 and p>3)
            {
                int k=ans.size()-1;
                ans[k].push_back(v[0]);
            }
              if(v.size()==2 and p>3)
            {
                int k=ans.size()-1;
                ans[k].push_back(v[0]);
                ans[k].push_back(v[1]);
            }
            
            
        }
        
        return ans;
    }
};