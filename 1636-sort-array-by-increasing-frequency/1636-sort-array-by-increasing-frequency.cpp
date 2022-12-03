class Solution {
public:
static bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second==b.second ? a.first>b.first : a.second<b.second;
}
    vector<int> frequencySort(vector<int>& num) {
        unordered_map<int, int> m;
        vector<int> ans;
        for(auto x : num)m[x]++;
        vector<pair<int,int>> v;

        for(auto x : num) v.push_back({x, m[x]});

        sort(v.begin(), v.end(), cmp);

        for(auto x : v)ans.push_back(x.first);

        return ans;
    }
};