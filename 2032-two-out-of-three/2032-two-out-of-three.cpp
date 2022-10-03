class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3)
    {
     
       map<int,int>mp,mp1;
        set<int>s;
        for(int i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            mp1[nums2[i]]++;
        }
      for(int i=0;i<nums2.size();i++)
      {
          if(mp.find(nums2[i])!=mp.end())
          {
              s.insert(nums2[i]);
          }
          
        }
        for(int i=0;i<nums3.size();i++)
      {
          if(mp.find(nums3[i])!=mp.end())
          {
              s.insert(nums3[i]);
          }
          
        }
        for(int i=0;i<nums3.size();i++)
      {
          if(mp1.find(nums3[i])!=mp1.end())
          {
              s.insert(nums3[i]);
          }
          
        }
        
    
        
       
        vector<int>v(s.begin(), s.end());
      
        return v;
    }
};