class Solution {
public:
    int canBeTypedWords(string text, string bro) 
    {
        
        vector<string>str;
        int n=text.size();
        int p=0;
        int counter=0;
        for(int i=0;i<n;i++)
        {
           
            if(i==n-1)
            {
                counter++;
                string swa=text.substr(p,counter);
                str.push_back(swa);
                break;
            }
             if(text[i]!=' ')
            {
                counter++;
            }
            if(text[i]==' ')
            {
                string san=text.substr(p,counter);
                str.push_back(san);
                p=i+1;
                counter=0;
            }
        }
        set<char>s;
        for(int i=0;i<bro.size();i++)
        {
            s.insert(bro[i]);
        }
        
        int count=0;
        for(int i=0;i<str.size();i++)
        {
            int flag=0;
            for(int j=0;j<str[i].size();j++)
            {
                if(s.find(str[i][j])!=s.end())
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                count++;
            }
        }
        
        return count;
    }
};