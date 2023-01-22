class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        
         if(s=="")
         {
             return true;
         }
        
        int n=t.size();
        int n1=s.size();
        
        int counter=0;
        int j=0;
        for(int i=0;i<n;i++)
        {
            
            if(s[j]==t[i])
            {
                counter++;
             
              
                   j++;
                if(n1==counter)
                {
                    return true;
                    break;
                }
            }
              
        }
        return false;
    }
};