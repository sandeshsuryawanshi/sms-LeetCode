class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) 
    {
        vector<string> res;
        map<string, int> M;
        vector<pair<int, string>> VP;
        
        for(auto word: words)
            M[word]++;
        
        for(auto m: M) 
            VP.push_back({m.second, m.first});

        sort(VP.begin(), VP.end(), [](auto &l, auto &r) {
            return (l.first == r.first) ? l.second > r.second : l.first < r.first;
        });

        while(k--) {
            res.push_back(VP.back().second);
            VP.pop_back();
        }

        return res;
    }
};