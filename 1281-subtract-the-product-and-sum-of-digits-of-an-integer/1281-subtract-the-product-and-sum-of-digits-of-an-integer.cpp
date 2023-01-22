class Solution {
public:
    int subtractProductAndSum(int n)
    {
        int product=1;
        int sum=0;
        
        while(n>0)
        {
            int k=n%10;
            product*=k;
            sum+=k;
            n/=10;
        }
        return product-sum;
    }
};