class Solution {
public:
    bool isPalindrome(ListNode* head) {

        // Empty ya single node ki list palindrome hoti hai
        if (head == nullptr || head->next == nullptr) {
            return true;
        }

        // Middle find karne ke liye
        ListNode* slow = head;
        ListNode* fast = head;

        // slow 1 step, fast 2 steps
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Second half ko reverse karna hai
        ListNode* prev = nullptr;
        ListNode* current = slow;

        while (current != nullptr) {

            // Next node save karo
            ListNode* next = current->next;

            // Arrow reverse karo
            current->next = prev;

            // Prev ko current par lao
            prev = current;

            // Current ko next par lao
            current = next;
        }

        // First half aur reversed second half compare karo
        ListNode* first = head;
        ListNode* second = prev;

        while (second != nullptr) {

            // Values different hain toh palindrome nahi hai
            if (first->val != second->val) {
                return false;
            }

            // Dono pointers aage
            first = first->next;
            second = second->next;
        }

        // Sab values same hain
        return true;
    }
};