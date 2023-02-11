class Solution 
{
public:
    bool isNumber(string s)
      {
       for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;
 
        return true;
          }
    int maximumValue(vector<string>& strs)
    {
        int maxi=INT_MIN;
        int mn=0;
        
        for(int i=0;i<strs.size();i++)
        {
            if(isNumber(strs[i]))
            {
               cout << "Integer";
                mn=stoi(strs[i]);
            }
            else
            {
            cout << "String";
            mn=strs[i].length();
            }
           
            maxi=max(mn,maxi);
        }
        
        return maxi;
    }
};