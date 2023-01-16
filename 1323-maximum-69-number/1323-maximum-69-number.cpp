class Solution {
public:
     int number(vector<int>v,int s)
     {
         int sum=0;
         
         for(int i=0;i<v.size();i++)
         {
             if(i==s)
             {
                 if(v[i]==6) v[i]=9;
                 else v[i]=6;
                 
                 sum=sum*10+v[i];
                 
             }
             else
             {
                 sum=sum*10+v[i];
             }
         }
         return sum;
     }
    int maximum69Number (int num) 
    {
        int num1=num;
        vector<int>v;
        
        while(num1>0)
        {
            int k=num1%10;
            v.push_back(k);
            num1=num1/10;
        }
        reverse(v.begin(),v.end());
        
        int mx=num;
        for(int i=0;i<v.size();i++)
        {
            int p=number(v,i);
            
            mx=max(mx,p);
        }
        return mx;
    }
};