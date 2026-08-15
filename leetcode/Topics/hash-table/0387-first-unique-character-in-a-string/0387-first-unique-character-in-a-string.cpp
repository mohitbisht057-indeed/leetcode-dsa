class Solution {
public:
    int firstUniqChar(string s) {

        // 26 lowercase letters ke liye 26 boxes
        // count[0] = a
        // count[1] = b
        // ...
        // count[25] = z
        int count[26] = {0};

        // Step 1: Har character ki frequency count karo
        for (int i = 0; i < s.length(); i++) {

            // Current character ke corresponding box ka count +1
            // Example:
            // 'a' - 'a' = 0  → count[0]
            // 'c' - 'a' = 2  → count[2]
            count[s[i] - 'a']++;
        }

        // Step 2: String ko left se right dobara check karo
        // Humein FIRST unique character chahiye
        for (int i = 0; i < s.length(); i++) {

            // Agar current character sirf 1 baar aaya hai
            if (count[s[i] - 'a'] == 1) {

                // i us character ka index hai
                return i;
            }
        }

        // Agar koi unique character nahi mila
        return -1;
    }
};