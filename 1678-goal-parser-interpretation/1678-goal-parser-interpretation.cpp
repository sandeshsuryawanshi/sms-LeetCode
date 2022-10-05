class Solution {
public:
    string interpret(string s2) 
    {
         stack<string> s;
        
        int i=s2.size()-1;
        while(i>=0)
        {
            if( s2[i]==')' and s2[i-1]=='(')
            {
                string s8="o";
                s.push(s8);
                i=i-2;
            }
            else if( s2[i]==')' and s2[i-1]!='(')
            {
               i--;
                continue;
            }
             else if( s2[i]=='(' and s2[i+1]!=')')
            {
               i--;
                continue;
            }
            else if(s2[i]>='a' || s2[i]<='z' || s2[i]>='A' || s2[i] <='Z')
            {
                 string s1(1,s2[i]);
                s.push(s1);
                i--;
            }     
        }
          string str="";
          while(!s.empty())
          {
              string s1=s.top();
               s.pop();
              str+=s1;
          }
         return str;
    }
};