/**
* Definition of ListNode
* class ListNode {
* public:
*     int val;
*     ListNode *next;
*     ListNode(int val) {
*         this->val = val;
*         this->next = NULL;
*     }
* }
*/
class Solution {
public:
    /**
    * @param head: The first node of linked list.
    * @param n: An integer.
    * @return: The head of linked list.
    */
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        // write your code here
        ListNode *cur = head, *prev = NULL;
        while (cur) {
            if (prev)
                prev = prev->next;
            if (n-- == 0)
                prev = head;
            cur = cur->next;
        }
        if (prev)
            prev->next = prev->next->next;
        else
            return head->next;
        return head;
    }
};
