class Solution {
public:
    
    bool powertwo(int n)
    {
        if(n==1)
        {
            return true;
        }
        if(n<=0 || n%2!=0)
        {
            return false;
        }
        
        return powertwo(n/2);
    }
    bool isPowerOfTwo(int n) 
    {
       
        bool k=powertwo(n);
        
        return k;
    }
};