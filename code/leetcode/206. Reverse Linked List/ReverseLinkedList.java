

import java.util.*;
class Solution {
    public ListNode reverseList(ListNode head) {
        
        Stack<Integer> s = new Stack<>();
        ListNode t = head;
        while(t!=null){
            s.push(t.val);
            t=t.next;
        }
        ListNode h=null,temp=null;
        while(!s.isEmpty()){
            int data = s.pop();
            if(h==null)
                h=temp=new ListNode(data);
            else{
               System.out.println(data);
                temp.next = new ListNode(data);
                temp = temp.next;
            }
        }
        return h;
    }
}

public class ReverseLinkedList {
    
}
