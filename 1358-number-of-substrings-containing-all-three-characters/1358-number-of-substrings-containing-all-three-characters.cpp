class Solution {
public:
    int numberOfSubstrings(string s)
    {
        int l=0,r=0,end=s.length()-1;
        int n=s.length();
        unordered_map<char,int>map;
        int count=0;
        while(r<n)
        {
            //increment the char at the right index
            map[s[r]]++;
            while(map['a']>=1 && map['b']>=1 && map['c']>=1)
            {
                //we need to add 1 for the current subarray + all the subarray on the right of the r pointer
                count+=1+(end-r);

                map[s[l]]--;
                l++;
            }
            r++;
        }
        return count;
    }
};