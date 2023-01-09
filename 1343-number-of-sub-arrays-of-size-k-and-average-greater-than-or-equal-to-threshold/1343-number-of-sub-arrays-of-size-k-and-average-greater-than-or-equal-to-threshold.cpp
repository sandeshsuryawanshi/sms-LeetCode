class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) 
    {
        int i=0;
        int j=0;
        int sum=0;
        double avg;
        int counter=0;
      while(j<arr.size())
      {
          sum+=arr[j];
          if(j-i+1<k)
          {
              j++;
              continue;
          }
         
              avg=sum/(k*1.0);
              if(avg>=threshold)
                  counter++;
          sum=sum-arr[i];
          i++;
          j++;
      }
        return counter;
    }
};