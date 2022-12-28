class Solution {
public:

    vector<vector<int>> merge(vector<vector<int>>& inter) {

       vector<vector<int>>res;


       sort(inter.begin(),inter.end());
       
      
       int open = inter[0][0], close = inter[0][1];

       for(int i = 1; i < inter.size(); ++i)
       {
           if(close >= inter[i][0]) close = max(inter[i][1],close);

           else
           {
              res.push_back({open,close});
              open = inter[i][0], close = inter[i][1];
           }
       }

        res.push_back({open,close});

    
       return res;

    }
};