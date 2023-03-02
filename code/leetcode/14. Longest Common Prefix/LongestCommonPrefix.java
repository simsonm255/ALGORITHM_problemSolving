class Solution {
    public String longestCommonPrefix(String[] strs) {
        String ans = "";
        int index = 0;
        boolean flag = true;
        for(int j=0;j<strs[0].length();j++){
            char checkLetter = strs[0].charAt(index);
            for(int i=1;i<strs.length;i++){
                if(index<strs[i].length()&&checkLetter==strs[i].charAt(index)){
                    flag = true;
                }else{
                    flag = false;
                    break;
                }
            }
            if(flag==true){
                ans+=String.valueOf(checkLetter);
            }else{
                break;
            }
            index++;
        }
        return ans;
    }
}

//optimized solution

class Solution1 {
    public String longestCommonPrefix(String[] strs) {
        
       String pre = strs[0];
       for(int i=1;i<strs.length;i++)
           while(strs[i].indexOf(pre)!=0)
            pre = pre.substring(0,pre.length()-1);
        return pre;      
    }
}

public class LongestCommonPrefix {
    
}
