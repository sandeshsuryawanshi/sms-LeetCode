class Solution {
public:
    string removeStars(string s) 
    {
    
        stack<int>st;
         string str="";
        int counter=0;
        // for(int i=s.size()-1;i>=0;i--)
        // {
        //     if(s[i]=='*')
        //     {
        //         counter++;
        //     }
        //     else if(counter==0)
        //     {
        //         str+=s[i];
        //     }
        //     else
        //     {
        //         counter--;
        //     }
        // }
        
           for(int i=0;i<s.size();i++)
           {
               st.push(s[i]);
           }
           while (!st.empty())
           {
               char ch=st.top();
               if(ch=='*')
               {
                   counter++;
                   st.pop();
               }
               else if(counter==0)
               {
                   str+=ch;
                   st.pop();
               }
               else
               {
                   counter--;
                   st.pop();
               }
               
           }
           
        reverse(str.begin(),str.end());
        return str;
    }
};