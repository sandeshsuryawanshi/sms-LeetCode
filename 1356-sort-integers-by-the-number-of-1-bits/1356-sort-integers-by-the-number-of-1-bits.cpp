class Solution {
public:
    vector<int> sortByBits(vector<int>& arr)
    {
        map<int,vector<int>> mp;
            
            vector<int>result;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                mp[arr[i]].push_back(0);
            }
            else
            {
                int j=0;
                int temp=arr[i];
                while(temp>0)
                {
                    if(temp%2==1)
                   j++;
                    temp/=2;
                    
                    
                }
                mp[j].push_back(arr[i]);
            }
        }
        
        for(auto it:mp)
        {
            sort(it.second.begin(),it.second.end());
            for(auto it1:it.second)
            {
                result.push_back(it1);
            }
        }
        return result;
        
    }
};