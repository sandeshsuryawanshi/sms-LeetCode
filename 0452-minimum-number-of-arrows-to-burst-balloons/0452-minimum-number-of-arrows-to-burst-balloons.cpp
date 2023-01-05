class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p)
    {
          sort(p.begin(),p.end());
        int n=p.size(),i=0,ans=1;
        int t=p[0][1];
        while(i<n){
            if(p[i][0]>t)
           {
               ans++;
                t=p[i][1];
                i++;
                continue;
           } 
            if(t>p[i][1])
               t=p[i][1];
        
            i++;
        } 
           
        return ans;
        
    }
};