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
  public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
      
    ListNode l3 = new ListNode();
    ListNode l3Head = l3;
    int carryOver = 0;
      
    while(l1 != null || l2 != null) {

      int addedVal = 0;

      if(l1 != null) {
        addedVal = addedVal + l1.val;
        l1 = l1.next;
      }

      if(l2 != null) {
        addedVal = addedVal + l2.val;
        l2 = l2.next;
      }

      l3.val = (addedVal + carryOver) % 10;
      carryOver = (int) Math.floor((addedVal+carryOver)/10);
        
      if(carryOver > 0 || l1 != null || l2 != null) {
        ListNode nextNode = new ListNode();
        l3.next = nextNode;
        l3 = l3.next;
      }
    }

    while(carryOver > 0) {

      l3.val = carryOver % 10;
      carryOver = (int) Math.floor(carryOver/10);

      if(carryOver > 0) {
        ListNode nextNode = new ListNode();
        l3.next = nextNode;
        l3 = l3.next;
      }
    }
    return l3Head;
  }
}
