class Solution {
    public:string removeOuterParentheses(string s) 
    {
        string output;
        int count = 0;
        for (auto c : s)
        {
            if (c == ')') 
                count--;
            if (count != 0) 
                output += c;
            if (c == '(') 
                count++;
        }
        return output;
    }
};
