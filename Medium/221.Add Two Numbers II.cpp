class Solution {
public:
    /*
    * @param l1: The first list.
    * @param l2: The second list.
    * @return: the sum list of l1 and l2.
    */
    ListNode * addLists2(ListNode * l1, ListNode * l2) {
        // write your code here
        ListNode *ans = nullptr;
        stack<int> stack1, stack2;
        while (l1 != nullptr) {
            stack1.push(l1->val);
            l1 = l1->next;
        }
        while (l2 != nullptr) {
            stack2.push(l2->val);
            l2 = l2->next;
        }
        stack<int> &s1 = stack1.size() >= stack2.size() ? stack1 : stack2;
        stack<int> &s2 = stack1.size() >= stack2.size() ? stack2 : stack1;
        while (!s1.empty()) {
            int a, b;
            a = s1.top();
            s1.pop();
            if (s2.size()) {
                b = s2.top();
                s2.pop();
            } else {
                b = 0;
            }
            int sum = a + b;
            int carry = sum / 10;
            ListNode *temp = ans;
            ans = new ListNode(sum % 10);
            ans->next = temp;
            if (carry > 0) {
                if (s1.empty()) {
                    ListNode *temp = ans;
                    ans = new ListNode(carry);
                    ans->next = temp;
                } else {
                    s1.top() += carry;
                }
            }
        }
        return ans;
    }
};
