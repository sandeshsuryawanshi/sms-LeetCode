class Solution {
public:
     
      bool check(int n)
      {
          int k=n;
          while(n>0)
          {
              int rem=n%10;
              if(rem==0  || k%rem!=0)
              {
                  return false;
              }
               n/=10;
              }
          return true;
      }
    vector<int> selfDividingNumbers(int left, int right)
    {
      vector<int>ans;
         for(int i=left;i<=right;i++)
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
        return ans;
    }
};