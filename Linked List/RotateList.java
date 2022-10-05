// https://leetcode.com/problems/rotate-list

import java.util.*;
public class RotateList {
    public ListNode rotateRight(ListNode head, int k) {
        if(head==null || head.next==null)return head;
        int s = size(head);
        int rot = k%s;
        int temp = s-rot;
        ListNode ll = head;
        while(temp!=1){
            ll=ll.next;
            temp--;
        }
        ListNode head2 = ll.next;
        ll.next=null;
        ll =head2;
        if(head2==null)return head;
        while(ll.next!=null)ll=ll.next;
        ll.next=head;
        return head2;
        
    }

    private int size(ListNode head){
        int sz=0;
        ListNode temp = head;
        while(temp!=null){
            sz++;
            temp=temp.next;
        }
        return sz;
    }
}