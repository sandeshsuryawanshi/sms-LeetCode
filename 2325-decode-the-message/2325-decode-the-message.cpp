class Solution {
public:
    string decodeMessage(string key, string message)
    {
          map<char,char>mp;
         int k=97;
        vector<char>v;
        for(int i=0;i<26;i++)
        {
             char p=97+i;
            v.push_back(p);
           }
        int j=0;
       
        for(int i=0;i<key.length();i++)
        {
          if(isalpha(key[i]))
          {
           if(mp.find(key[i])==mp.end())
           {
               mp[key[i]]=v[j];
               
              j++;
           }
           }
        }
        string str="";
         
        for(int i=0;i<message.length();i++)
        {
            if(mp.find(message[i])!=mp.end())
            {
                str+=mp[message[i]];
            }
            else
            {
                str+=' ';
            }
            
        }
        return str;
       
    }
};