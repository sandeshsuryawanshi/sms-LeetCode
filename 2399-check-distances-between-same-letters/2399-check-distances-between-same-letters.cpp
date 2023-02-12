class Solution {
public:
    bool checkDistances(string s, vector<int>& distance)
    {
        
    
        map <char, vector<int>> mp;
        for(int i = 0; i < s.length(); i++){
            mp[s[i]].push_back(i);
        }
        map <char, int> m;
        for(auto r: mp){
            m[r.first] = r.second[1] - r.second[0] - 1;
        }
        
        for(auto x:m)
        {
            cout<<x.second<<" ";
        }
        for(int i=0;i<26;i++)
        {
            char c=97+i;
            
            if(m.find(c)!=m.end() )
            {
                
                if(m[c]!=distance[i])
                    return false;
            }
        }
        return true;
    }
};