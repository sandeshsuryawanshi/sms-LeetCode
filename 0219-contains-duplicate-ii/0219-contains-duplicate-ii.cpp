class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        
       
         map<int,int> m;
     for(int j=0; j<nums.size(); j++) 
     {
         if(m.find(nums[j]) == m.end())
          m[nums[j]]=j;
         else{
              if(j-m[nums[j]] <=k) return true;
              else m[nums[j]]=j;
         }
    
     }
     return false;
    }
};