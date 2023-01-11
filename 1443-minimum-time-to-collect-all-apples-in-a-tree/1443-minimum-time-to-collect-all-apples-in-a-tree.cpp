class Solution {
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple)
    {
        int time = 0;
        unordered_map<int, vector<int> > map;
        
        for(auto p : edges)
        {
            map[p[0]].push_back(p[1]);
            map[p[1]].push_back(p[0]);
        }
        
        vector<bool> visited(hasApple.size(), false);
        
        for(auto p : map[0])
        {
            visited[0] = true;
            
            if(!visited[p] && nodeWithApple(map, hasApple, visited, p, time))
                time += 2;
            
        }
        return time; 
        
    }
    bool nodeWithApple(unordered_map<int, vector<int>>& map, vector<bool>& hasApple, vector<bool>& visited, int node, int& time)
    {
        bool apple = hasApple[node];
        visited[node] = true;
        for(auto p : map[node])
            if(!visited[p] && nodeWithApple(map, hasApple, visited, p, time))
            {
                apple = true;
                time += 2;
            }
        return apple;
    }
};