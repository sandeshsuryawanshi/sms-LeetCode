class Solution {
public:
     int sum(int n)
     {
         int sum1=0;
         while(n!=0)
         {
             int rem=n%10;
             sum1+=rem;
             n/=10;
         }
         return sum1;
     }
    int countLargestGroup(int n)
    {
        map<int,int>m,mp;
        for(int i=1;i<=n;i++)
        {
            int result=sum(i);
            m[result]++;
        }
        for(auto x:m)
        {
            mp[x.second]++;
        }
        int largest=INT_MIN;
         int number=INT_MIN;
        for(auto x:mp)
        {
            if(number<x.first)
            {
                largest=x.second;
            }
        }
        return largest;
    }
};