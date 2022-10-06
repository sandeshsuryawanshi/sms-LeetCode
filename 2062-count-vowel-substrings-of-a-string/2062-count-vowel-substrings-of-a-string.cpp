class Solution {
public:
   bool isVowel(char word)
{
    return word=='a'||word=='e'||word=='i'||word=='o'||word=='u';
}
int countVowelSubstrings(string word) {
    int n=word.size();
    int ans=0;
    unordered_set<char>st;
    for(int i=0;i<n;i++)
    {
        if(!isVowel(word[i])) continue;  //if ith word is not a vowel then no need to check futher
        for(int j=i;j<n;j++)  
        {
            if(isVowel(word[j]))  //if the jth word is a vowel insert in a set, keep on doing this till we don't find a non-vowel char...
            {
                st.insert(word[j]);
                if(st.size()==5) ans++;  //if the set size becomes 5 means we have all the vowels in our current substring increment ans...
            }
            else  //anytime j becomes non-vowel break;
            {
                break;
            }
        }
        st.clear();  //clear the string before going to next iteration so that it wont't hit (st.size()==5) this condition already...
    }
    return ans;
}
};