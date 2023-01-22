class Solution {
public:
    int minOperations(int n)
    {
        vector<int>v;
        
        for(int i=0;i<n;i++)
        {
            int k= 2*i+1;
            v.push_back(k);
        }
        int i=0;
        int j=v.size()-1;
        int sum=0;
        while(i<=j)
        {
            int p=v[j]-n;
            sum+=p;
            i++;
            j--;
        }
        return sum;
        
    }
};