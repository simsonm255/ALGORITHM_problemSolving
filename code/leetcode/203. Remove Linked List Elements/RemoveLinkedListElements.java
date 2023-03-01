class Solution {
    public ListNode removeElements(ListNode head, int val) {
        ListNode t=null;
        ListNode h=null;
        while(head!=null){       
            if(head.val!=val){              
                if(h==null){
                    h=t=new ListNode(head.val);
                }else{
                    t.next = new ListNode(head.val);
                    t = t.next;
                }
            }
            head = head.next;
        }
        return h;
    }
}