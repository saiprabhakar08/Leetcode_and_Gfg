/**
 * @param {number[]} arr
 * @return {number[]}
 */
var replaceElements = function(arr) {
    let maxi = arr[arr.length - 1];
    arr[arr.length - 1] = -1;
    for(let i = arr.length - 2 ; i >= 0 ; i--)
    {
        let temp = Math.max(maxi,arr[i]);
        arr[i] = maxi;
        maxi = temp;
    }
    return arr;
};