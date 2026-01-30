/**
 * @param {string} s
 * @return {number}
 */
var longestPalindrome = function(s) {
    const obj = s.split("").reduce((obj,ele) => {
        if(obj.hasOwnProperty(ele)) obj[ele]++;
        else obj[ele] = 1;
        return obj;
    },{});
    let ans = 0;
    let flag = true;
    for(let ele in obj)
    {
        if((obj[ele] % 2) === 0) ans += obj[ele];
        else
        {
            ans += (obj[ele] - 1);
            if(flag)
            {
                ans += 1;
                flag = false;
            }
        }
    }
    return ans;
};