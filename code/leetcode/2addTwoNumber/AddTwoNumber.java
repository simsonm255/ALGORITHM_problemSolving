package code.leetcode.2addTwoNumber;

class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int ans = 0;
        ListNode list = new ListNode();
        ListNode res = list;
        int carry = 0;
        while(l1!=null||l2!=null){
            int a = l1==null?0:l1.val;
            int b = l2==null?0:l2.val;
            int sum = a+b+carry;
            carry = sum>9?1:0;
            list.next = new ListNode(sum%10);
            list = list.next;
            
            l1 = l1!=null?l1.next:null;
            l2 = l2!=null?l2.next:null;
        }
        while(carry!=0){
            list.next = new ListNode(carry%10);
            carry/=10;
        }
        return res.next;
    }
}

public class AddTwoNumber {
    
}
