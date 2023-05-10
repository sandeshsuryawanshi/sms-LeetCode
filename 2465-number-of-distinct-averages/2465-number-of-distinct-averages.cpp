class Solution {
public:
    int distinctAverages(vector<int>& nums) 
    {
         map<double,int>mp;
        
         sort(nums.begin(),nums.end());
         int i=0,j=nums.size()-1;
        
         for(auto x:nums)
         {
             cout<<x<<" ";
         }
        cout<<endl;
         while(i<j)
         {
             double ans=(nums[i]+nums[j])/2.0;
             mp[ans]++;
             cout<<ans<<" ";
             i++;
             j--;
         }
         
           
         return mp.size();
    }
};