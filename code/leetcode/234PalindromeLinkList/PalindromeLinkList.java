package code.leetcode.234PalindromeLinkList;

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
        Stack<Integer> st = new Stack<>();
        ListNode t = head;
        while(t!=null){
            st.push(t.val);
            t=t.next;
        }

        t = head;
        while(t!=null){
            if(t.val!=st.pop())
                return false;

            t=t.next;
        }
        return true;

    }
}

public class PalindromeLinkList {
    
}
