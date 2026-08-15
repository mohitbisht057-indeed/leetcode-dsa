class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        // nums1 ke last valid element ka index
        // Example:
        // nums1 = [1,2,3,0,0,0]
        // m = 3
        // i = 2 (value = 3)
        int i = m - 1;

        // nums2 ke last element ka index
        // Example:
        // nums2 = [2,5,6]
        // n = 3
        // j = 2 (value = 6)
        int j = n - 1;

        // nums1 ki last position
        // Example:
        // Total size = 6
        // Last index = 5
        int k = m + n - 1;

        // Jab tak dono arrays me elements bache hain
        while (i >= 0 && j >= 0) {

            // Compare karo
            // Example:
            // nums1[i] = 3
            // nums2[j] = 6
            if (nums1[i] > nums2[j]) {

                // Agar nums1 ka element bada hai
                // usko last empty position me rakho
                nums1[k] = nums1[i];

                // nums1 ka pointer ek step left
                i--;

            } else {

                // Agar nums2 ka element bada hai
                // usko last empty position me rakho
                nums1[k] = nums2[j];

                // nums2 ka pointer ek step left
                j--;
            }

            // Last position fill ho gayi
            // Ab next empty position pe jao
            k--;
        }

        // Agar nums2 me elements bach gaye hain
        while (j >= 0) {

            // Unhe nums1 me copy kar do
            nums1[k] = nums2[j];

            // Dono pointers ko left le jao
            j--;
            k--;
        }

        // Agar nums1 me elements bach gaye
        // To kuch mat karo.
        // Wo already apni correct position pe hain.
    }
};