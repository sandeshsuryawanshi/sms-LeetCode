class Solution {
public:
    int countAsterisks(string s) 
    {
       
     int flag=0,count=0;
   for(auto x:s)
     {
         if(x=='|')
          {
          flag++;
          }
         if(flag==0 && x=='*')
          {
            count++;
          }
         if(flag==2)
         {
           flag=0;
         }
    }
    return count;
    
    }
};