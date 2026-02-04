/**
 * @param {string} s
 * @return {string}
 */
var reverseByType = function(s) {
    let letters = "";
    let symbols = "";
    for(let c of s)
    {
        let ascii = c - 'a' + 97;
        if(ascii >= 97 && ascii <= 122)
        {
            letters += c;
        }
        else
        {
            symbols += c;
        }
    }
    console.log(letters,symbols);
    return "";
};