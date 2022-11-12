class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2)
    {
        vector<int>v;
        vector<int>v2;
        map<int,int>mp,m;
        for(int i=0;i<arr1.size();i++)
        {
            mp[arr1[i]]++;
        }
        for(int i=0;i<arr2.size();i++)
        {
            m[arr2[i]]++;
        }
        int k=0;
        for(int i=0;i<arr1.size();i++)
        {
            if(m.find(arr1[i])==m.end())
            {
                v2.push_back(arr1[i]);
                
            }
            else if(k<arr2.size())
            {
            int k1=mp[arr2[i]];
            
            for(int j=0;j<k1;j++)
            {
                v.push_back(arr2[i]);
                
            }
             k++;   
            }
            else 
            {
                continue;
            }
        }
        sort(v2.begin(),v2.end());
        for(int i=0;i<v2.size();i++)
        {
            v.push_back(v2[i]);
        }
        return v;
     
    }
};