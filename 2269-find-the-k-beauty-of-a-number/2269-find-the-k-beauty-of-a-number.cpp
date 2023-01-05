class Solution {
public:
    int divisorSubstrings(int num, int k) 
    {
     vector<int>v;
        int temp=num;
        while(temp>0)
        {
            int k1=temp%10;
            v.push_back(k1);
        
            temp=temp/10;
         }
       
         reverse(v.begin(),v.end());
        int i=0;
        int j=0;
        int count=0;
        int sum=0;
        
        while(j<v.size())
        {
            sum=sum*10+v[j];
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k)
            {
                if(sum==0)
                {
                    i++;
                    j++;
                }
                else
                {
                    if(num%sum==0)
                        count++;
                    int c=v[i]*pow(10,k-1);
                    sum=sum-c;
                    i++;
                    j++;
                }
            }
            
        }
        return count;
    }
};