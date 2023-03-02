import java.util.HashMap;

class Solution {
    public int lengthOfLongestSubstring(String s) {
        int len = s.length();
        int right=0,left=0,maxLen=0;
        var map = new HashMap<Character,Integer>();
        for(right=0;right<len;right++){
            char ch= s.charAt(right);
            if(map.containsKey(ch))
                left = Math.max(map.get(ch)+1,left);

            map.put(ch,right);
            maxLen = Math.max(maxLen,right-left+1);
        }
        return maxLen;
    }
}