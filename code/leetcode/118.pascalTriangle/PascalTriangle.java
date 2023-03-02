import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<List<Integer>> generate(int numRows) {
        int i=0;
        var list = new ArrayList<List<Integer>>();
        while(i<numRows){
            var templist = new ArrayList<Integer>();
            int j=0;
            while(j<=i){
                if(j==0||i==1||j==i){
                    templist.add(1);
                    j++;
                    continue;
                }
                templist.add(list.get(i-1).get(j-1)+list.get(i-1).get(j));
                j++;
            }
            list.add(templist);
            i++;
        }       
        return list;

    }
}

public class PascalTriangle {
    
}
