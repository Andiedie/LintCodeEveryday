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
    * @return: The head of linked list.
    */
    ListNode *insertionSortList(ListNode *head) {
        // write your code here
        ListNode *current = head, *prev = NULL;
        while (current->next) {
            prev = current;
            current = current->next;
            ListNode *compare = head, *last = NULL;
            while (compare != current) {
                if (compare->val >= current->val) {
                    prev->next = current->next;
                    if (last) {
                        last->next = current;
                    } else {
                        head = current;
                    }
                    current->next = compare;
                    current = prev;
                    break;
                }
                last = compare;
                compare = compare->next;
            }
        }
        return head;
    }
};
