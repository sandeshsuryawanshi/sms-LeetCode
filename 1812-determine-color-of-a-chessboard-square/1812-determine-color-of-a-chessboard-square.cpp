class Solution {
public:
    bool squareIsWhite(string coordinates)
    
    {
        
        if((coordinates[0]+coordinates[1])%2!=0)
            return true;
        return false;
    }
};