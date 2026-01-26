/**
 * @param {number[]} arr
 * @return {number[][]}
 */
var minimumAbsDifference = function(arr) {
    arr.sort((a,b) => a - b);
    let diff = Infinity;
    for(let i = 0 ; i < arr.length - 1 ; i++)
    {
        if((arr[i+1] - arr[i]) < diff) diff = arr[i + 1] - arr[i];
    }
    let ansArr = [];
    for(let i = 0 ; i < arr.length - 1 ; i++)
    {
        if((arr[i + 1] - arr[i]) == diff) ansArr.push([arr[i],arr[i+1]]);
    }
    return ansArr;
    
};