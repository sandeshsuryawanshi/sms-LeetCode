class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int ans = 0;
    int f = -1;
    unordered_map<string,int>ma;
    for(int i=0;i<words.size();i++)
    { 
        ma[words[i]]++;
    }
    
    for( auto it:ma)
    {
        string check = it.first;// to check the reverse is present or not
        
        reverse(check.begin(),check.end());
        if(check == it.first) //case if both element of the word is same
        {
            if(it.second%2 == 0)
            {
                ans+=(it.second*2);
            }
            
            else
            {
                ans += (it.second-1)*2;
                
                if(f == -1)//as it will run only once
                {
                    ans += 2;
                    f = 0;
                }
            }
                
        }
        else
        {
            if(ma.find(check)!=ma.end())
            {
                ans = ans+ min(ma[check],ma[it.first])*2;//case if both the elements are different
            }
          
        }
    }
    return ans;
    
    }
};