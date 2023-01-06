class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int i=0;
        for(i;i<costs.size() && coins>=costs[i] ;i++)
        {
            coins-=costs[i];
        }
        return i;
    }
};