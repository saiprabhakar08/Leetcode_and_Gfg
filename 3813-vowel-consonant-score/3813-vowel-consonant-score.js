/**
 * @param {string} s
 * @return {number}
 */
var vowelConsonantScore = function(s) {
    let vowels = 0,consonents = 0;
    for(let i of s)
    {
        let asciiValue = i.charCodeAt(0);
        if(asciiValue == 97 || asciiValue == 101 || asciiValue == 105 || asciiValue == 111 || asciiValue == 117) vowels++;
        else if(asciiValue >= 97 && asciiValue <= 122) consonents++;
    }
    let ans = Math.floor(vowels / consonents);
    if(consonents == 0) return 0;
    return ans;
};