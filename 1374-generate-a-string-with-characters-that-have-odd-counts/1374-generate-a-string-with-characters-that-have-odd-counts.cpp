class Solution {
public:
    string generateTheString(int n) 
    {
         string k="";
        if(n%2==0)
        {
            for(int i=0;i<n-1;i++)
               k+='p';
            k+='z';
        }
        else{
            for(int i=0;i<n;i++)
                k+='p';
        }
        return k;
    }
};