class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity)
    {
        vector<int>stamps(1001,0);
           // 1000 is a size of that vector and 0 it indicates a 0 elements in a vector
        
        for( vector<int>res:trips)
        {
            int no_people=res[0];
            int start=res[1];
            int end=res[2];
            
            stamps[start]+=no_people;
            stamps[end]-=no_people;
        }
        
        int maintain=0;
        for(int countPeople:stamps)
        {
            maintain+=countPeople;
            if(maintain>capacity)
            
            {
                return false;
            }
            
        }
        return true;
    }
};