
class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int ans=0;
        int ones=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0'){
                ans=min(ans+1,ones);
            }
            else{
                ones++;
            }
        }
        return ans;
    }
};