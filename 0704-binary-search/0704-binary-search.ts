/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(nums, target)
{
        var s=0;
        var e=nums.length-1;
        while(s<=e)
        {
           var mid = Math.floor((s + e) / 2);
            
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return -1;
};