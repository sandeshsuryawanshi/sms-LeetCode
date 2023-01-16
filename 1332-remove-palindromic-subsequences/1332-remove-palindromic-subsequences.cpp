class Solution {
public:
    int removePalindromeSub(string s)
    {
        int s1=0;
        int e=s.length()-1;
        
        
        while(s1<e)
        {
            if(s[s1]!=s[e]) return 2;
            
            s1++;
            e--;
        }
        
        return 1;
    }
};