class Solution {
public:
     int convert(int num)
     {
         int sum=0;
         while(num!=0)
         {
             int rem=num%10;
             sum+=rem;
             num/=10;
         }
         return sum;
     }
    int getLucky(string s, int k) 
    {
        vector<int> v;
         string str="";
        for(int i=0;i<s.size();i++)
        {
            int num=s[i]-96;
             str+=to_string(num); 
            
        }
        cout<<str;
     int sum = 0;
         for(int i=0;i<str.size();i++)
         {
             int n=str[i]-48;
             sum+=n;
         }
         int j=1;
         while(j<k)
         {
             sum=convert(sum);
             j++;
         }
        return sum;
    }
};