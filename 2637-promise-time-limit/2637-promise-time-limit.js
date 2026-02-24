/**
 * @param {Function} fn
 * @param {number} t
 * @return {Function}
 */
var timeLimit = function(fn, t) {
    
    return async function(...args) {
        const ans = await Promise.race([fn(...args),new Promise(resolve => {
            setTimeout(() => {
                resolve("TLE");
            },t);
        })])
        if(ans !== "TLE") return ans;
        else return Promise.reject("Time Limit Exceeded");
    }
};

/**
 * const limited = timeLimit((t) => new Promise(res => setTimeout(res, t)), 100);
 * limited(150).catch(console.log) // "Time Limit Exceeded" at t=100ms
 */