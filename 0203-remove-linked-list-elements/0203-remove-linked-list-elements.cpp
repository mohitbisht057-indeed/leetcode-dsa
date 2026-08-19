class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        // Agar list empty hai
        if (head == nullptr) {
            return head;
        }

        // Starting mein jo nodes ka value val ke equal hai
        // unko remove karo
        while (head != nullptr && head->val == val) {
            head = head->next;
        }

        // Current pointer head se start karega
        ListNode* current = head;

        // Jab tak current aur uska next exist karta hai
        while (current != nullptr && current->next != nullptr) {

            // Agar next node ki value val ke equal hai
            if (current->next->val == val) {

                // Next node ko skip kar do
                current->next = current->next->next;
            }
            else {

                // Value different hai
                // current ko aage move karo
                current = current->next;
            }
        }

        // Modified list ka head return karo
        return head;
    }
};