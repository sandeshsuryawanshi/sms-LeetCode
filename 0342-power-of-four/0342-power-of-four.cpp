class Solution {
public:
     bool powerfour(int n)
         
     {
         if(n==1)
         {
             return true;
         }
         if(n<=0 || n%4!=0)
         {
             return false;
         }
         return powerfour(n/4);
     }
    bool isPowerOfFour(int n) 
    {
        bool k=powerfour(n);
        
        return k;
    }
};