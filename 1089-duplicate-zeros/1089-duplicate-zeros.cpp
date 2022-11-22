class Solution {
public:
    void duplicateZeros(vector<int>& arr) 
    {
        int k=arr.size();
        vector<int>ans;
        for(int i=0;i<k;i++)
        {
            if(ans.size()==k)
            {
                break;
            }
            else if(arr[i]==0)
            {
                ans.push_back(0);
                ans.push_back(0);
            }
            else
            {
                ans.push_back(arr[i]);
            }
                
            
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=ans[i];
        }
        
    }
};