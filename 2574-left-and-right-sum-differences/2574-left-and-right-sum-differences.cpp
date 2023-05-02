class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) 
     {
          vector<int>answer,leftSum,rightSum;
         
          int sum=0;
          for(int i=0;i<nums.size();i++)
          {
              leftSum.push_back(sum);
              sum+=nums[i];
          }
         
         int rSum=0;
           int n=nums.size();
          for(int i=n-1;i>=0;i--)
          {
              rightSum.push_back(rSum);
              rSum+=nums[i];
          }
          reverse(rightSum.begin(),rightSum.end());
         for(auto x:rightSum)
          {
              cout<<x<<endl;
          }
           for(int i=0;i<nums.size();i++)
          {
              int ans=abs(leftSum[i]-rightSum[i]);
              answer.push_back(ans);
          }
        return answer;
    }
};

 //  if size of the answer array is same as the size of the given array 
 // if answer[0] = answer[0]- answer[n-1];
 