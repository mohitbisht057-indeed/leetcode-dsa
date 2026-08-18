class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        // current ko list ke first node par rakho
        ListNode* current = head;

        // Jab tak current aur uska next node exist karta hai
        while (current != nullptr && current->next != nullptr) {

            // Current node aur next node ki value compare karo
            if (current->val == current->next->val) {

                // Same value hai = duplicate
                // Next node ko skip kar do
                current->next = current->next->next;
            }
            else {

                // Values different hain
                // Isliye current ko next node par move karo
                current = current->next;
            }
        }

        // Final linked list ka head return karo
        return head;
    }
};