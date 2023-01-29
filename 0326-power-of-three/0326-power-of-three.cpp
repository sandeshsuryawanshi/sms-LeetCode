class Solution {
public:
    bool powerOfThree(int n)
    {
     if(n==1)
        {
            return true;
        }
        if(n<=0 || n%3!=0)
        {
            return false;
        }
        return powerOfThree(n/3);
        
    }
            
    bool isPowerOfThree(int n) 
    {
       return powerOfThree(n);
    }
};