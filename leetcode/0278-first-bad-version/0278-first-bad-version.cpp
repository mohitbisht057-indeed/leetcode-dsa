class Solution {
public:
    int firstBadVersion(int n) {

        // Search 1 se start hoga
        int left = 1;

        // Search n tak hoga
        int right = n;

        // Jab tak left aur right alag hain,
        // tab tak search karte rahenge
        while (left < right) {

            // Left aur right ke beech ka middle version
            int mid = left + (right - left) / 2;

            // Check karo ki mid version bad hai ya nahi
            if (isBadVersion(mid)) {

                // Mid bad hai.
                // Mid khud first bad ho sakta hai,
                // isliye mid ko remove nahi karna.
                // Mid ke baad wale versions hata do.
                right = mid;
            }
            else {

                // Mid good hai.
                // Isliye first bad mid ke baad hi hoga.
                // Mid ko remove karke left ko aage karo.
                left = mid + 1;
            }
        }

        // Jab left == right ho jaye,
        // wahi first bad version hai.
        return left;
    }
};