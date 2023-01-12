class Solution {
public:


    unordered_map<char, int> dfs(unordered_map<int, vector<int>> &adj, vector<bool> &visited, string &labels, int u, vector<int> &ans)
    {
        visited[u] = true;
        unordered_map<char, int> mp;
        for(int v:adj[u])
        {
            if(!visited[v])
            {
                unordered_map<char, int> temp = dfs(adj, visited, labels, v, ans);
                for(auto i:temp){
                    mp[i.first] += i.second;
                }
            }
        }
        mp[labels[u]] += 1;
        ans[u] = mp[labels[u]];
        return mp;
    }

    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        
        unordered_map<int, vector<int>> adj;
        for(auto i:edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<bool> visited(n, false);
        vector<int> ans(n, 0);
        dfs(adj, visited, labels, 0, ans);
        return ans;


    }
};