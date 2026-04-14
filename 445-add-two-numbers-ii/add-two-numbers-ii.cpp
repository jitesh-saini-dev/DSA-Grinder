/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> st1;
        stack<int> st2;

        // Push values into stacks
        while (l1 != nullptr) {
            st1.push(l1->val);
            l1 = l1->next;
        }

        while (l2 != nullptr) {
            st2.push(l2->val);
            l2 = l2->next;
        }

        int carry = 0;
        ListNode* head = nullptr;

        // Process stacks
        while (!st1.empty() || !st2.empty() || carry != 0) {
            int sum = carry;

            if (!st1.empty()) {
                sum += st1.top();
                st1.pop();
            }

            if (!st2.empty()) {
                sum += st2.top();
                st2.pop();
            }

            ListNode* node = new ListNode(sum % 10);
            node->next = head;
            head = node;

            carry = sum / 10;
        }

        return head;
    }
};