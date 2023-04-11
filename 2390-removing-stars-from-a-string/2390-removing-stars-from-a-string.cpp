class Solution {
public:
    string removeStars(string s) 
    {
    
        
         string str="";
        int counter=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='*')
            {
                counter++;
            }
            else if(counter==0)
            {
                str+=s[i];
            }
            else
            {
                counter--;
            }
        }
        reverse(str.begin(),str.end());
        return str;
    }
};