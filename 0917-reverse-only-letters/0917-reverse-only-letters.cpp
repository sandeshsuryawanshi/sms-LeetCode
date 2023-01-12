class Solution {
public:
    string reverseOnlyLetters(string s) 
    {
        vector<char>s1;
        for(int i=0;i<s.size();i++)
        {
             if(isalpha(s[i]))
             {
                 s1.push_back(s[i]);
             }
        }
        reverse(s1.begin(),s1.end());
        string s2="";
        int j=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            {
                s2+=s1[j];
                j++;
            }
            else
            {
                s2+=s[i];
            }
        }
        return s2;
    }
};