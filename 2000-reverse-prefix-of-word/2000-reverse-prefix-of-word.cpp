class Solution {
public:
    string reversePrefix(string word, char ch)
    {
        int n=word.size();
        string str="";
        int count=0;
        int p=0;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(word[i]==ch)
            {
                string str1=word.substr(0,i+1);
                reverse(str1.begin(),str1.end());
                str+=str1;
                p=i;
                flag=1;
                 break;
            }
        }
        if(flag==1)
        {
            str+=word.substr(p+1,n-1);
            return str;
        }
        else
        {
            return word;
        }
    }
};