class Solution {
public:
    int percentageLetter(string s, char letter)
    {
       double counter=0;
        for(int i=0;i<s.size();i++)
            {
                if(s[i]==letter)
                {
                    counter++;
                }
            }
            double n=s.size();
            
            double x=counter/n;
        
        return x*100;
    }
};