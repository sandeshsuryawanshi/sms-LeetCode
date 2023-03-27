/**
 * @param {number} n
 * @return {boolean}
 */
var canWinNim = function(n) 
{
      let r=n%4;
       if(r>=1 && r<=3)
           return true;
    
    return false;
};