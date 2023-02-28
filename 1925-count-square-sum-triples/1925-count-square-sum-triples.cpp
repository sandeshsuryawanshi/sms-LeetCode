class Solution {
public:
    int countTriples(int n) {
        int count=0;
     for(int i=1;i<=n;i++){
         for(int j=i+1;j<=n;j++){
             int s=(i*i+j*j);
             int ans=sqrt(s);
             if(ans*ans==s and ans<=n)
             count+=2;
         }
     }
     return count;   
    }
};