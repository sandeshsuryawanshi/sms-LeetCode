class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums)
    {
       unordered_map<int, int> m;
    vector<vector<int>> res;
    for (int x : nums) {
        m[x] = m.count(x) ? m[x] + 1 : 0;
        if (res.size() <= m[x]) {
            res.push_back(std::vector<int>());
        }
        res[m[x]].push_back(x);
    }
    return res;
    }
};