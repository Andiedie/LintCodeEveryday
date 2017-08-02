/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /**
     * @param head a ListNode
     * @param val an integer
     * @return a ListNode
     */
    ListNode *removeElements(ListNode *head, int val) {
        if (head == NULL)
            return head;
        // Write your code here
        ListNode *previos = head, *current = head->next;
        while (current != NULL) {
            if (current->val == val) {
                previos->next = current->next;
            } else {
                previos = current;
            }
            current = current->next;
        }
        if (head->val == val)
            return head->next;
        return head;
    }
};
