/**
 * @param {string} s
 * @return {string}
 */
var removeStars = function(s) {
      
       let ans = [];
    for(let i=0; i<s.length; i++)
    {
        if(s[i]=="*")
        {
            ans.pop();
        }
        else 
            ans.push(s[i]);
    }
    let ans_string = ans.join("");
    return ans_string;
       
    
};