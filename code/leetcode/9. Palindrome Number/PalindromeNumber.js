var x =121;

var isPalindrome = function(x) {

    if(x<0)
        return false;

    var check = (x+"").split("").reverse().join("");
    return x==check;
};

console.log(isPalindrome(x));