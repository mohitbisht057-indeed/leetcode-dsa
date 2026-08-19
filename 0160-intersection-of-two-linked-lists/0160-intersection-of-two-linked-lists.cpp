class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        // Pointer A, List A ke head se start karega
        ListNode* pA = headA;

        // Pointer B, List B ke head se start karega
        ListNode* pB = headB;

        // Jab tak dono same node par nahi aa jaate
        while (pA != pB) {

            // Agar pA list ke end par pahuch gaya,
            // toh use List B ke head par bhej do
            if (pA == nullptr) {
                pA = headB;
            }
            else {
                // Warna pA ko ek node aage le jao
                pA = pA->next;
            }

            // Agar pB list ke end par pahuch gaya,
            // toh use List A ke head par bhej do
            if (pB == nullptr) {
                pB = headA;
            }
            else {
                // Warna pB ko ek node aage le jao
                pB = pB->next;
            }
        }

        // Dono same node par mile
        // Agar intersection nahi hai toh dono NULL honge
        return pA;
    }
};