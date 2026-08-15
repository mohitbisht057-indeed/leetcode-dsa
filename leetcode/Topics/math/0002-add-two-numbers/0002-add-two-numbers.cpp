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

        // Dummy node banaya
        ListNode* dummy = new ListNode(0);

        // Current pointer
        ListNode* current = dummy;

        // Carry ke liye
        int carry = 0;

        // Jab tak dono lists ya carry available hai
        while (l1 != nullptr || l2 != nullptr || carry != 0) {

            // Agar l1 khatam ho gayi toh 0
            int x = (l1 != nullptr) ? l1->val : 0;

            // Agar l2 khatam ho gayi toh 0
            int y = (l2 != nullptr) ? l2->val : 0;

            // Dono digits + carry
            int sum = x + y + carry;

            // Current digit
            int digit = sum % 10;

            // Next carry
            carry = sum / 10;

            // New node banao
            current->next = new ListNode(digit);

            // Current ko aage move karo
            current = current->next;

            // Lists ko aage move karo
            if (l1 != nullptr)
                l1 = l1->next;

            if (l2 != nullptr)
                l2 = l2->next;
        }

        // Dummy ke next se actual answer start hai
        return dummy->next;
    }
};