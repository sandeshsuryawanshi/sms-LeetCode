class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2)
    {
         map<long long int ,long long int>mp;
        for(int i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]++;
        }
        
          map<int , int>mp1;
        for(int i=0;i<nums2.size();i++)
        {
            mp1[nums2[i]]++;
        }
         for(auto it:mp)
         {
             if(mp1.find(it.first)!=mp1.end())
             {
                 return it.first;
             }
         }
        return -1;
        
        
    }
};