class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) 
    {
          vector<int>result(num_people,0);
          
         int k=0;
          
         while(candies>0)
         {
             int i=0;
             while(i<num_people)
             {
                 if(k+1>candies)
                 {
                     k=candies;
                 }
                 else {
                     k++;
                 }
                 result[i]+=k;
                 i++;
                 candies-=k;
             }
         }
          
          return result;
    }
};