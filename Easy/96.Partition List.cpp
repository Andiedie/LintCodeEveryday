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
    * @param x: an integer
    * @return: a ListNode
    */
    ListNode *partition(ListNode *head, int x) {
        // write your code here
        vector<int> nums;
        ListNode *cur = head;
        while (cur) {
            nums.push_back(cur->val);
            cur = cur->next;
        }
        auto it = nums.begin();
        while (it != nums.end()) {
            if (*it < x) {
                while (it != nums.begin() && *(it - 1) >= x) {
                    swap(*it, *(it - 1));
                    it--;
                }
            }
            it++;
        }
        cur = head;
        int count = 0;
        while (cur) {
            cur->val = nums[count++];
            cur = cur->next;
        }
        return head;
    }
};
