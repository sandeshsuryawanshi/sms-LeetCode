class Solution {
public:
    string reverseVowels(string s) 
    {
//         int i=0;
//         int j=s.size()-1;
        
//         while(i<j)
//         {
//             if([s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I',s[i]=='O',s[i]=='U']
//                [s[j]=='a'||s[j]=='e'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I',s[j]=='O',s[j]=='U'])
                
//             {
//                 swap(s[i],s[j]);
//                 i++;
//                 j--;
//             }
//             else if(s[i]!='a'||s[i]!='e'||s[i]!='o'||s[i]!='u'||s[i]!='A'||s[i]!='E'||s[i]!='I',s[i]!='O',s[i]!='U')
//             {
//                 i++;
//             }
//             else
//             {
//                 j--;
//             }
//         }
        
//         return s;
        
         int a;
        int i=0,j=s.size()-1;
        while(i<j){
            bool flag1=false,flag2=false;
            if (s[i]=='A' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'
               || s[i]=='E' || s[i]=='U' || s[i]=='I' || s[i]=='O'){
                
                    flag1=true;
                }
            if (s[j]=='A' || s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'
               || s[j]=='E' || s[j]=='U' || s[j]=='I' || s[j]=='O'){
                flag2=true;
            }
            
            if(flag1 && flag2){
                swap(s[i],s[j]);
                i++,j--;
            }
            
            if(!flag1){
                i++;
            }
            if(!flag2)j--;
            
                
        }
        return s;
    }
};