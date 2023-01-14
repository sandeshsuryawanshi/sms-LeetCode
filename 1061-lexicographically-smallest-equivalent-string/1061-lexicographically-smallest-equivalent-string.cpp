class Solution {
public:
    int parent[26];
    void myUnion(int ch1, int ch2) {
        if(ch1 < ch2) {
            parent[ch2] = ch1;
        } else {
            parent[ch1] = ch2;
        }
    }

    int find(int ch1) {
        int par = parent[ch1];
        while(ch1 != par) {
            ch1 = par;
            par = parent[ch1];
        }
        return par;
    }

    string smallestEquivalentString(string s1, string s2, string baseStr) {
        
        for(int i = 0; i < 26; ++i) {
            parent[i] = i;
        }

        int len = s1.size();
        for(int i = 0; i < len; ++i) {
            myUnion(find(s1[i] - 'a'), find(s2[i] - 'a'));          
        }

        string res = "";
        for(int i = 0; i < baseStr.size(); ++i) {
            res += ('a' + find(baseStr[i] - 'a'));
        }
        return res;
    }
};