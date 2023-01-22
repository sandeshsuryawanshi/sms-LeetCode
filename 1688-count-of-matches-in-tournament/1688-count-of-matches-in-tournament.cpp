class Solution {
public:
    int numberOfMatches(int n)
    {
        int temp=n;
        int sum=0,i=0;
          int p=temp;
            while(i<p)
            {
                
               int k=n/2;
                sum+=k;
                cout<<k<<" ";
                
                n=0;
                n=temp-k;
                cout<<n<<" "<<endl;
                temp=n;
                 if(n==1)
                {
                    
                    break;
                }
                i++;
            }
        
        return sum;
    }
};