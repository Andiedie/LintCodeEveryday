class Solution {
public:
    /*
    * @param head: n
    * @return: The new head of reversed linked list.
    */
    ListNode * reverse(ListNode * head) {
        // write your code here
        if (!head) return NULL;
        ListNode *prev = NULL, *cur = head, *next = NULL;
        while (cur) {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
};
