/**
 * @param {number[]} nums
 * @return {number}
 */
var minPairSum = function(nums) {
    nums.sort();
    let i = 0, j = (nums.length) - 1;
    let ans = 0;
    console.log(i,j);
    while(i < j)
    {
        console.log(nums[i],nums[j]);
        ans = Math.max(ans,(nums[i] + nums[j]));
        i++;
        j--;
    }
    console.log(nums.length);
    return ans;
};