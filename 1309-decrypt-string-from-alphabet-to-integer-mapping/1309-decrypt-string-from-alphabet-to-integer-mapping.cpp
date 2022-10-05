class Solution {
public:
    string freqAlphabets(string s) 
    {
        string str="";
        
        int i=s.size()-1;
        while(i>=0)
        {
              if(s[i] == '#' )
            {
                string st="";
                st.push_back(s[i-2]);
                st.push_back(s[i-1]);
                int k= stoi(st);
                str+=char(k+96);
                i-=3;
                  
            }
              else
              {
                 str+=char((s[i] - '0') + 96);
                  i--;
            
            }
                
        }
        reverse(str.begin(),str.end());
        
        return str;
    }
};