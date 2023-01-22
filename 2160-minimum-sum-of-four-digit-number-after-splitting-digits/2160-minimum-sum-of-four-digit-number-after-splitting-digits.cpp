class Solution {
public:
    int minimumSum(int num) 
    {
        vector<int>v;
        
        int j=num;
        
        while(j>0)
        {
            int k=j%10;
            
            v.push_back(k);
            
            j=j/10;
            
        }
        
        sort(v.begin(),v.end());
        
         int num1=v[0]*10+v[v.size()-2];
         int num2=v[1]*10+v[v.size()-1];
        
        cout<<num1<<" "<<num2<<endl;
        return num1+num2;
    }
};