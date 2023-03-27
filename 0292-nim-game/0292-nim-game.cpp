class Solution {
public:
    bool canWinNim(int n) {
        
        int r=n%4;
        if(r>=1 && r<=3)
            return true;
        return false;
    }
};