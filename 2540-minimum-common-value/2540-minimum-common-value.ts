var getCommon = function(nums1, nums2) {
  

let map = {};

        for (let i = 0 ; i < nums1.length ; i++)
            {
                const item = nums1[i];

                if(!map[item])
                {
                    map[item] = 1;
                }
                else 
                {
                    map[item] = map[item]+1;
                }
            }


        for(let j = 0 ; j < nums2.length ; j ++)
            {
                const item2 = nums2[j];

                if(map[item2])
                {
                    return item2;
                }
            }

        return -1;
    
};