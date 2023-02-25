var lengthOfLongestSubstring = function(s) {
    var len = s.length;
    var right=0,left=0;
    var maxLen = 0;
    var map = new  Map();
    for (let right = 0; right < s.length; right++) {
        var ch = s[right];
        if(map.has(ch))
            left = Math.max(left,map.get(s[right])+1);
        map.set(ch,right);
        maxLen = Math.max(maxLen,right-left+1);
        
    }
    return maxLen;
};

console.info(lengthOfLongestSubstring("bbbbb"));