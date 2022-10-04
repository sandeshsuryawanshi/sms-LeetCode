class Solution {
public:
    string reverseWords(string s)
    {
        int n=s.size();
        string z=" ";
        string str="";
        int p=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(i==n-1)
            {
                count++;
                string str3=s.substr(p,count);
                reverse(str3.begin(),str3.end());
                str+=str3;
                break;
            }
            if(s[i]!=' ')
            {
                count++;
            }
            if(s[i]==' ')
            {
                string str2=s.substr(p,count);
                reverse(str2.begin(),str2.end());
                str+=str2;
                str+=z;
                p=i+1;
                count=0;
                
            }
        }
        return str;
    }
};