class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int x = 0;
        bool hasNonZero = false;

        // Calculate XOR of all elements
        for (int num : nums) {
            x ^= num;

            // Check if there is at least one non-zero element
            if (num != 0) {
                hasNonZero = true;
            }
        }

        // If all elements are 0, no subsequence can have non-zero XOR
        if (!hasNonZero) {
            return 0;
        }

        // Whole array has non-zero XOR
        if (x != 0) {
            return n;
        }

        // Whole array XOR is 0,
        // remove one non-zero element
        return n - 1;
    }
};