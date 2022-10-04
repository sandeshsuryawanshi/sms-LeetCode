class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        int n=word1.size();
        int m=word2.size();
        string str="";
        int k=max(n,m);
        int i=0,j=0;
        while(i<n || j<m)
        {
            if(i<n)
            {
                str+=word1[i];
                i++;
            }
            if(j<m)
            {
                str+=word2[j];
                j++;
            }
        }
        return str;
        
    }
};