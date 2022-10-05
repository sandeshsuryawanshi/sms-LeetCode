class Solution {
public:
    bool halvesAreAlike(string s) 
    {
        int n=s.size();
        int k=n/2;
        
        string str= s.substr(0,k);
        string str1= s.substr(k,n-k);
        
        int counter=0;
        int counter1=0;
        for(int i=0;i<str.size();i++)
        {
           char x=str[i];
           if (x == 'a' || x == 'e' || x == 'i' ||
                 x == 'o' || x == 'u' || x == 'A' ||
                  x == 'E' || x == 'I' || x == 'O' || x == 'U')
           {
             counter++;
           }
        }
         for(int i=0;i<str1.size();i++)
        {
           char x=str1[i];
           if (x == 'a' || x == 'e' || x == 'i' ||
                 x == 'o' || x == 'u' || x == 'A' ||
                  x == 'E' || x == 'I' || x == 'O' || x == 'U')
           {
             counter1++;
           }
        }
         if(counter==counter1)
         {
             return true;
         }
        else
        {
            return false;
        }
        
    }
};