class Solution {
public:
    int pivotInteger(int n)
    {
       if(n==1)
       {
           return 1;
       }
        int i=1;
        int j=n-2;
        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
        }
         int leftsum=v[0];
        
          int rightsum=v[n-1];
        while(i<=j)
        {
            
            if(leftsum<rightsum || i==j)
            {
                leftsum+=v[i];
                
                i++;
            }
            else
            {
                rightsum+=v[j];
                j--;
                
            }
            if(leftsum==rightsum and i==j)
            {
                leftsum+=v[i];
                rightsum+=v[i];
                break;
            }
        }
         if(leftsum==rightsum and i==j)
         {
             return i+1;
         }
        else
        {
            return -1;
        }
    }
};