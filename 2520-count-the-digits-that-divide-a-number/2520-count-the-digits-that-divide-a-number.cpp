class Solution {
public:
    int countDigits(int num) 
    {
      int counter=0;
        
       int temp=num;
        vector<int>s;
        while(temp>0)
        {
            int k=temp%10;
            s.push_back(k);
            temp/=10;
        }
        for(int i=0;i<s.size();i++)
        {
           
            if(num%s[i]==0)
                counter++;
        }
        return counter;
    }
};