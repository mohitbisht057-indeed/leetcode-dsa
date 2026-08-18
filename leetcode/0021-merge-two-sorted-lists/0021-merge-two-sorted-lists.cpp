class Solution {
public:

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        // Ek dummy node banayi
        // Ye sirf starting point hai
        ListNode dummy(0);

        // tail abhi dummy par hai
        // tail batayega ki answer ki last node kaunsi hai
        ListNode* tail = &dummy;


        // Jab tak dono lists mein nodes bachi hain
        while (list1 != nullptr && list2 != nullptr) {

            // Dono current values ko compare karo
            if (list1->val <= list2->val) {

                // list1 ki chhoti value ko answer mein lagao
                tail->next = list1;

                // list1 ko uski next node par le jao
                list1 = list1->next;
            }

            else {

                // list2 ki chhoti value ko answer mein lagao
                tail->next = list2;

                // list2 ko uski next node par le jao
                list2 = list2->next;
            }

            // tail ko abhi jo node add ki hai us par le jao
            tail = tail->next;
        }


        // Agar list1 mein abhi bhi nodes bachi hain
        if (list1 != nullptr) {

            // Un bachi hui nodes ko answer ke end mein laga do
            tail->next = list1;
        }

        else {

            // Warna list2 ki bachi hui nodes laga do
            tail->next = list2;
        }


        // dummy ke baad se actual answer start hota hai
        return dummy.next;
    }
};