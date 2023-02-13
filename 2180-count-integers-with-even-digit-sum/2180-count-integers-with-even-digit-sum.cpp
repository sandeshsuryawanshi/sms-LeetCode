

class Solution {
public:
      bool check(int n)
      {
          int sum=0;
          
          while(n>0)
          {
              int rem=n%10;
              sum=sum+rem;
              
              n/=10;
              }
          if(sum%2==0)
          return true;
          else 
              return false;
      }
     int countEven(int num)
    {
      vector<int>ans;
         for(int i=2;i<=num;i++)
         {
             if(check(i))
             {
                 ans.push_back(i);
             }
             else
             {
                 continue;
             }
         }
        return ans.size();
    }
};