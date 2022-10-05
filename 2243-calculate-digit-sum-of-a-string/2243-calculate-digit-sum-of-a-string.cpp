class Solution {
public:
    string digitSum(string s, int k)
    {
       while(s.length()>k){
            string temp="";
            int p=0, sum=0;
            for(int i=0; i<s.length(); i++){
                sum += s[i]-'0';
                p++;
                if(p==k){
                    temp += to_string(sum);
                    sum=0;
                    p=0;
                }
            }
            if(p>0) temp += to_string(sum);
            s=temp;
        }
        return s;
 
    }
};