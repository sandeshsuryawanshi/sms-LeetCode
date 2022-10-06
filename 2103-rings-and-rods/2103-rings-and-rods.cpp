class Solution {
public:
    int countPoints(string rings) 
    { 
       unordered_map<char,set<char>>mp;
        int n = rings.size(); 
      for(int i=0;i<=n-2;i+=2){
          mp[rings[i+1]].insert(rings[i]);
          
      }
        int ct=0;
        for(auto it:mp){
            if(it.second.size()==3) ct++;
        }
        return ct;
        
}
};