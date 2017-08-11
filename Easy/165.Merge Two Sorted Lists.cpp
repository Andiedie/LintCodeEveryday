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
    * @param ListNode l1 is the head of the linked list
    * @param ListNode l2 is the head of the linked list
    * @return: ListNode head of linked list
    */
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        // write your code here
        ListNode *root = new ListNode(0);
        ListNode *current = root;
        while (l1 != NULL & l2 != NULL) {
            if (l1->val < l2->val) {
                current->next = new ListNode(l1->val);
                l1 = l1->next;
            } else {
                current->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            current = current->next;
        }
        while (l1 != NULL) {
            current->next = new ListNode(l1->val);
            l1 = l1->next;
            current = current->next;
        }
        while (l2 != NULL) {
            current->next = new ListNode(l2->val);
            l2 = l2->next;
            current = current->next;
        }
        return root->next;
    }
};
