class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        
        map<int,int>mp;
        set<int>s;
        for(int i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(mp.find(nums2[i])!=mp.end())
            {
                s.insert(nums2[i]);
            }
        }
        
        vector<int>ans(s.begin(),s.end());
        return ans;
    }
};