/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var minimumDifference = function(nums, k) {
    nums.sort((a,b) => a - b);
    let ans = Infinity;
    let i = 0;
    while((i + k - 1) < nums.length)
    {
        ans = Math.min(ans,(nums[i + k - 1] - nums[i]));
        i++;
    }
    if(ans === Infinity) return 0;
    return ans;
};