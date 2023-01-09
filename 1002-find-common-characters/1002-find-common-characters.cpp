class Solution 
{
public:
    vector<string> commonChars(vector<string>& words) 
    {
  
         
         string str=words[0];
        map<char,int>mp;
         for(int i=0;i<str.size();i++)
         {
             mp[str[i]]++;
         }
        
       unordered_map<char,int>temp;
        for(auto& word:words)
        {
            temp.clear();
            for(auto ch:word)
            {
                temp[ch]++;
            }
            for(auto& it:mp)
            {
                it.second=min(it.second,temp[it.first]);
            }
        }
          
            vector<string>v1;
         for(auto x:mp)
         {
              
             int i=0;
             while(i<x.second)
             {
                 string s="";
                  s+=x.first;
                   v1.push_back(s);
                i++;
             }
            
           
         }
        return v1;
    }
};