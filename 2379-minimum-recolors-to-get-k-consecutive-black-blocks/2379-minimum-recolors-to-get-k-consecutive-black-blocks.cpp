class Solution 
{
public:
    int minimumRecolors(string b, int k)
    {
         map<char,int>mp;
        int i=0,j=0;
        int m=INT_MAX;
        int n=b.size()-1;
        char w='W';
        char x='B';
        int flag=0;
        while(j<=n)
        {
            mp[b[j]]++;
             
          
           
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                if(mp[w]==0 and mp[x]==k)
                {
                    m=0;
                    break;
                }
                else
                {
                    int k1=mp[w];
                    
                    m=min(k1,m);
                    cout<<m<<" ";
                    mp[b[i]]--;
                    i++;
                    j++;
                }
            }
           
        }
        return m;
        
    }
};