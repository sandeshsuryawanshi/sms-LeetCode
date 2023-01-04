class Solution {
public:
    int minimumRounds(vector<int>& tasks)
    {
         map<int,int>mp;
        
        for(auto x:tasks)
        {
            mp[x]++;
        }
        int count=0;
        int flag=0;
        for(auto x:mp)
        {
            if(x.second==1 )
            {
                flag=1;
                break;
            }
            else
            {
                if(x.second%3==0)
                {
                 int k1=x.second/3;
                 count+=k1;
                  
                }
               else
                {
                int k=x.second/3+1;
                count+=k;
                    
                }
            }
        }
        for(auto x:mp)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
         if(flag==1)
         {
             return -1;
         }        
           else
           {
               return count;
           }
    }
};