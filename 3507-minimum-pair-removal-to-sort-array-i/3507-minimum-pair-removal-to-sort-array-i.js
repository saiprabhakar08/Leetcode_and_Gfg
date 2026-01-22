/**
 * @param {number[]} nums
 * @return {number}
 */
let checkArraySortedOrNot = (nums) =>{
    for(let i = 1 ; i < nums.length ; i++)
    {
        if(nums[i] < nums[i - 1]) return false;
    }
    return true;
}
var minimumPairRemoval = function(nums) {
    let ans = 0;
    while(!checkArraySortedOrNot(nums)) 
    {
        ans++;
        let ansArr = [-1,-1];
        let adjSum = 1000000;
        for(let i = 0 ; i < nums.length - 1 ; i++)
        {
            let currSum = nums[i] + nums[i+1];
            if(currSum < adjSum) 
            {
                adjSum = currSum;
                ansArr[0] = i;
                ansArr[1] = i+1;
            }
        }
        let temp = [];
        for(let i = 0 ; i < nums.length ; i++)
        {
            if(i == ansArr[0]) temp.push(adjSum);
            else if(i == ansArr[1]) continue;
            else temp.push(nums[i]);
        }
        nums = temp;
   }
    return ans;

    
};