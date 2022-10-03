class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) 
    {
        
        int counter=0;
        for(int i=0;i<arr1.size();i++)
        {
            int flag=0;
            for(int j=0;j<arr2.size();j++)
            {
                if(d< abs(arr1[i]-arr2[j]))
                {
                    flag=1;
                   continue;
                }
                else
                {
                    flag=0;
                    break;
                }
                
            }
            if(flag==1)
            {
                counter++;
            }
           
        }
        return counter;
    }
};