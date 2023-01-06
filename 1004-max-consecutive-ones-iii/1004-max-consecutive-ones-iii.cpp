class Solution {
public:
   int longestOnes(vector<int>& nums, int k) {
      int zero=0;
      int ans = 0;
      int l = 0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]==0) zero++;
          
      if(zero>k){
         if(nums[l]==0) zero--;
         l++;
      } 
      else 
        ans = max(ans,i-l+1);
      } 
    return ans;
    }
};