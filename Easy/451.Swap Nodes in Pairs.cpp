class Solution {
public:
    /*
    * @param head: a ListNode
    * @return: a ListNode
    */
    ListNode * swapPairs(ListNode * head) {
        // write your code here
        bool isSwap = false;
        ListNode *prev = NULL, *cur = head;
        while (cur != NULL) {
            if (isSwap) {
                int temp = prev->val;
                prev->val = cur->val;
                cur->val = temp;
                isSwap = false;
            } else {
                isSwap = true;
            }
            prev = cur;
            cur = cur->next;
        }
        return head;
    }
};
