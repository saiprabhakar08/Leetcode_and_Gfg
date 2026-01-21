/**
 * @param {number[]} nums
 * @return {number}
 */
var findNumbers = function(nums) {
    return (nums.filter((ele)=>{
        // console.log(ele,toString(ele),toString(ele).length);
        return ((ele.toString().length) % 2 === 0);
    })).length;
};