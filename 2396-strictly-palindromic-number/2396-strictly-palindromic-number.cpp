class Solution {
public:
    
     int Base(int i,int n)
     {
         vector<int>v;
           while(n>0)    
           {    
            int k=n%i; 
             v.push_back(k);
            n=n/2;    
            } 
         int s=0,e=v.size()-1;
         
           while(s<=e)
           {
               if(v[s]!=v[e])
               {
                   return 0;
               }
               s++;
               e--;
           }
         return 1;
         
     }
    bool isStrictlyPalindromic(int n)
    
    {
        
        for(int i=2;i<=n-2;i++)
        {
            int p= Base(i,n);
            if(p==0)
            {
                return false;
            }
           
        }
        return true;
        
    }
};