class Solution {
public:
    bool checkIfPangram(string s) 
    {
       set<char>se;
        
        for(int i=0;i<s.size();i++)
        {
            se.insert(s[i]);
        }
        
        int k=se.size();
        
        if(k==26)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};