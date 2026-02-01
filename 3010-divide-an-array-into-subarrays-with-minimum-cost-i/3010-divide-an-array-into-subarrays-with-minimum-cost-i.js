/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumCost = function(nums) {
    let smallestNumber = 50;
    for(let i = 1 ; i < nums.length ; i++)
    {
        if(nums[i] < smallestNumber) smallestNumber = nums[i];
    }
    let secondSmallest = 50,count = 0;
    for(let i = 1 ; i < nums.length ; i++)
    {
        if(nums[i] === smallestNumber) count++;
        if(nums[i] < secondSmallest && nums[i] > smallestNumber)
        {
            secondSmallest = nums[i];
        }
    }
    let ans = nums[0];
    if(count > 1) ans += smallestNumber * 2;
    else 
    {
        ans += smallestNumber;
        ans += secondSmallest;
    }
    console.log(smallestNumber,secondSmallest);
    return ans;
    
    
};