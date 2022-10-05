class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2)
    {
        vector<string>str;
        vector<string>v2;
         int p=0;
        int counter=0;
        int n=s1.size();
        for(int i=0;i<s1.size();i++)
        {
           
            if(i==n-1)
            {
                counter++;
                string swa=s1.substr(p,counter);
                str.push_back(swa);
                break;
            }
             if(s1[i]!=' ')
            {
                counter++;
            }
            if(s1[i]==' ')
            {
                string san=s1.substr(p,counter);
                str.push_back(san);
                p=i+1;
                counter=0;
            }
        }
        int p1=0;
        int counter1=0;
        int n1=s2.size();
        for(int i=0;i<s2.size();i++)
        {
           
            if(i==n1-1)
            {
                counter1++;
                string swa=s2.substr(p1,counter1);
                v2.push_back(swa);
                break;
            }
             if(s2[i]!=' ')
            {
                counter1++;
            }
            if(s2[i]==' ')
            {
                string san=s2.substr(p1,counter1);
                v2.push_back(san);
                p1=i+1;
                counter1=0;
            }
        }
        vector<string>ans;
         
        for(int i=0;i<v2.size();i++)
        {
            str.push_back(v2[i]);
        }
        map<string,int>mp;
        for(int i=0;i<str.size();i++)
        {
            mp[str[i]]++;
        }
        for(int i=0;i<str.size();i++)
        {
            if(mp[str[i]]>1)
            {
                continue;
            }
            else
            {
                ans.push_back(str[i]);
            }
        }
        return ans;
    }
};