class Solution {
public:
     bool toCheck(char s,char ch,string sample)
     {
     
             if(find(sample.begin(), sample.end(), ch ) != sample.end() and  find(sample.begin(), sample.end(), s ) !=               sample.end())
             {
                 return true;
             }
         
         return false;
     }
    string greatestLetter(string s)
    {
        
             string ans="";
        for(int i=0;i<s.size();i++)
        {
            bool k1=0;
           
            if(s[i]>='a' and s[i]<='z')
            {
                char chi= toupper(s[i]);
                cout<<s[i]<<chi;
                 k1=toCheck(s[i],chi,s);
            }
            else
            {
                char chi= tolower(s[i]);
                    k1=toCheck(s[i],chi,s);
            }
             if(k1==1)
             { string sol="";
                sol+=toupper(s[i]);
                 if(sol>ans)
                 {
                     ans=sol;
                 }
             }
          }
            cout<<ans;
          return ans;
        
        }
};