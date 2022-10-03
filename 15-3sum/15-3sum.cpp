class Solution 
{
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
       int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
         vector<vector<int>>ans;
        for(int i=0;i<n-2;i++)
        {
            int low=i+1;
            int high=n-1;
            while(low<high)
            {
                int sum=nums[i]+nums[low]+nums[high];
                if(sum==0)
                {
                    vector<int>temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[low]);
                    temp.push_back(nums[high]);
                    s.insert(temp);
                   while(low<high && nums[low]==nums[low+1])
                    {
                    low++;
                    }
                    while(low<high && nums[high]==nums[high-1])
                    {
                        high--;
                    }
                    low++;
                    high--;
                    
               
                }
               else if(sum<0)
                {
                    low++;
                    
                }
                
                else
                {
                    high--;
                }
                
            }
        }
            // if(s.empty())
            // {
            //     return ans;
            // }
            for(auto x:s)
            {
                ans.push_back(x);
            }
            
        
        return ans;
    }
};