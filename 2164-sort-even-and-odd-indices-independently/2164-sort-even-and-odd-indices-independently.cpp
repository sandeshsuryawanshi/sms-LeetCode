class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums)
    {
          
         
          vector<int>even,odd,ans;
        
            for(int i=0;i<nums.size();i++)
         {
             if(i%2==0)
             {
                 even.push_back(nums[i]);
             }
             else
             {
                 odd.push_back(nums[i]);
             }
         }
         sort(even.begin(),even.end());
         sort(odd.begin(),odd.end(),greater<int>());
         
         int j=0;
         int k=0;
        
          for(int i=0;i<nums.size();i++)
          {
              if(i%2==0)
              {
                  nums[i]=even[k++]; 
                  
              }
              else
              {
                  nums[i]=odd[j++]; 
                  
              }
          }
        return nums;
    }
};