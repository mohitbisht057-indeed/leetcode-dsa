class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // Total elements in the array
        int n = nums.size();

        // Check every possible number from 0 to n
        for (int i = 0; i <= n; i++) {

            // Assume the current number is not present
            bool found = false;

            // Search the current number (i) in the array
            for (int j = 0; j < n; j++) {

                // If the current number is found
                if (nums[j] == i) {
                    found = true;
                    break;      // Stop searching
                }
            }

            // If the number was not found, it is the missing number
            if (found == false) {
                return i;
            }
        }

        // This line is never reached for valid input
        return -1;
    }
};