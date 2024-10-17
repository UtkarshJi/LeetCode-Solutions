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
        // Create a dummy node to act as the head of the result linked list
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        int carry = 0; // Initialize the carry

        // Traverse both lists while there are nodes in either list or carry is non-zero
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry; // Start with the carry from the previous addition
            
            // Add the value of the current node of l1 if it exists
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            // Add the value of the current node of l2 if it exists
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            // Calculate new carry (sum / 10) and the digit to store in the current node (sum % 10)
            carry = sum / 10;
            current->next = new ListNode(sum % 10);

            // Move to the next node in the result list
            current = current->next;
        }

        // Return the next node of the dummy, which is the head of the result list
        return dummy->next;
    }
};

