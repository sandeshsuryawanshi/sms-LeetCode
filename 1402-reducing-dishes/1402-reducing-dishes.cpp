class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction)
    {
         sort(satisfaction.begin(),satisfaction.end());
         long long val1=0,val2=0;
          int ans=0;
         int n=satisfaction.size();
         for(int i=0;i<satisfaction.size();i++)
         {
             val1+= satisfaction[n-i-1];
             val2+= -1* satisfaction[n-i-1]*i;
             
           int  val= val1*(i+1)+val2;
             
             ans=max(ans,val);
         }
         return ans;
        
    }
};