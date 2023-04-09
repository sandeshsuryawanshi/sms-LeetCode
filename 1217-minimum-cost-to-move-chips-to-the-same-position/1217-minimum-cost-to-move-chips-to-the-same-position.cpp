class Solution {
public:
    int minCostToMoveChips(vector<int>& p) {
        int even =0, odd =0; 

        for(int i =0; i <p.size();i++)
        {
            if(p[i] %2 ==0)
            even++; 
            else 
            odd++; 
        }
        if(even == p.size()|| odd == p.size())
        return 0 ; 

        return min(even, odd);
    }
};