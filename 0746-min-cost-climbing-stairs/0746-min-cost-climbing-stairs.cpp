class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost)
    {
          vector<int>v;
             v.push_back(cost[0]);
               v.push_back(cost[1]);
        
          for(int i=2;i<cost.size();i++)
          {
               int p=cost[i]+min(v[i-1],v[i-2]);
               v.push_back(p);
          }
           
         int n=v.size();
        cout<<n<<" ";
         for(int i=0;i<n;i++)
         {
             cout<<v[i]<<" ";
         }
         int p= min(v[n-1],v[n-2]);
        return p;
    }
};