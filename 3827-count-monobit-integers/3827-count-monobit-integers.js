/**
 * @param {number} n
 * @return {number}
 */
var countMonobit = function(n) {
    if(n === 0) return 1;
    else if(n === 1) return 2;
    else
    {
        let ans = 2;
        for(let i = 2 ; i <= n ; i++)
        {
            let temp = i;
            let onesCount = 0, zeroesCount = 0;
            while(temp)
            {
                if(temp & 1) onesCount++;
                else zeroesCount++;
                temp >>= 1;
            }
            if(zeroesCount === 0 || onesCount === 0) ans++;
        }
        return ans;
    }
};