//https://leetcode.com/problems/reorder-list/

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
     public ListNode midNode(ListNode head){//to find mid
        ListNode fast =  head, slow  =  head;
        while(fast.next!=null && fast.next.next!=null){
            fast =  fast.next.next;
            slow =  slow.next;
        }
        return slow;
    }
    
    public ListNode reverse(ListNode head){// to reverse second hald of the list
        ListNode curr =  head, prev=  null, next = null;
        while(curr!=null){
            next  =  curr.next;
            curr.next =  prev ;
            prev =  curr;
            curr  =  next;
        }
        return prev;
    }

    
    public void reorderList(ListNode head) {//to merge lists
        
        ListNode midNode =  midNode(head);
        ListNode nextToMid =  midNode.next;
        midNode.next = null;
        ListNode p2 =  reverse(nextToMid);
        
        ListNode p1 =  head ,p1Next;    //p1Next is tmp variable
        while(p1!=null && p2!=null){
            p1Next =  p1.next;                                    
			p1.next =  p2;
			           
            p1 =  p2;
            p2=p1Next;                        
        }                
        
    }
}
