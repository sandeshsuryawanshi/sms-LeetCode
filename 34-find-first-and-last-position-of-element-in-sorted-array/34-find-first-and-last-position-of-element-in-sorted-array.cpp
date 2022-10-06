class Solution {
public:
    vector<int> searchRange(vector<int>& a, int key)
    {
        
         
        int first=-1;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==key)
            {
                first=i;
                break;
                    
            }
        }
         int second=-1;
        for(int i=a.size()-1;i>=0;i--)
        {
            if(a[i]==key)
            {
                second=i;
                break;
                    
            }
        }
     
        return {first,second};
          
        
    }
};