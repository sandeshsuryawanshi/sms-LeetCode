class Solution {
public:
    int getLengthOfOptimalCompression(string s, int k)
    {
        
    vector<vector<int>> dp(s.size(), vector<int>(k+1, INT_MAX));
        for (int i = s.size()-1; i >= 0; --i) {
            for (int j = 0; j <= k; ++j) {
                if (i == s.size()-1) {
                    dp[i][j] = j==0;
                    continue;
                }
                // delete s[i], only possible when at least j=1 removables. 
                if (j > 0) {
                    dp[i][j] = dp[i+1][j-1];
                }
                // keep s[i], try all options, from 1 to as many s[i] as possible, i.e remove those different char in between.
                int count = 0, removed = 0;
                for (int iend = i; iend < s.size(); ++iend) {
                    if (s[iend] == s[i]) {
                        ++count;
                        int compress_length = GetCompressionLength(count);
                        compress_length += iend+1 < s.size()? dp[iend+1][j-removed] : 0;
                        dp[i][j] = std::min(dp[i][j], compress_length);
                    } else if (removed < j) {
                        ++removed;
                    } else {
                        break;
                    }
                }
            }
        }
        return dp[0][k];
    }
    int GetCompressionLength(int count) {
        if (count == 0) return 0;
        if (count == 1) return 1;
        if (count < 10) return 2;
        if (count < 100) return 3;
        return 4;
    }
};