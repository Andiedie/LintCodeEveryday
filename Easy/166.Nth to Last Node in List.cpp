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
    * @return: Nth to last node of a singly linked list.
    */
    ListNode *nthToLast(ListNode *head, int n) {
        // write your code here
        if (!head) return NULL;
        vector<ListNode *> nums;
        while (head != NULL) {
            nums.push_back(head);
            head = head->next;
        }
        return nums[nums.size() - n];
    }
};
