class Solution {
public:
    double findMedianSortedArrays(vector<int>& v, vector<int>& nums2)
    {
       
        for(int i=0;i<nums2.size();i++)
        {
            v.push_back(nums2[i]);
        }
        sort(v.begin(),v.end());
        int x=v.size();
        double res=0.0;
        if(x%2==0)
        {
            res=(v[x/2]+v[(x/2)-1])/2.0;
        }
        else
        {
            res=v[(x-1)/2];
        }
        return res;
    } 
};