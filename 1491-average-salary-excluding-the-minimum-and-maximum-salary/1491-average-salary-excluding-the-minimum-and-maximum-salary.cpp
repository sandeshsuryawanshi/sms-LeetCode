class Solution {
public:
    double average(vector<int>& salary) 
    {
     
        sort(salary.begin(),salary.end());
        int n=salary.size()-2;
        double sum=0;
        for(int i=1;i<=n;i++)
        {
            sum+=salary[i];
        }
        double ans=sum/n;
        
        return ans;
    }
};