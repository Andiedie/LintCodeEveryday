class Solution {
public:
    /**
    * @param l1: the first list
    * @param l2: the second list
    * @return: the sum list of l1 and l2
    */
    ListNode *addLists(ListNode *l1, ListNode *l2) {
        // write your code here
        ListNode *ans = NULL, *current = NULL;
        while (l1 || l2) {
            int add = (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
            if (current) {
                if (current->next) {
                    current->next->val += add;
                } else {
                    current->next = new ListNode(add);
                }
                current = current->next;
            } else {
                ans = new ListNode(add);
                current = ans;
            }
            while (current->val > 9) {
                current->val -= 10;
                if (current->next)
                    current->next += 1;
                else
                    current->next = new ListNode(1);
            }
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        return ans;
    }
};
