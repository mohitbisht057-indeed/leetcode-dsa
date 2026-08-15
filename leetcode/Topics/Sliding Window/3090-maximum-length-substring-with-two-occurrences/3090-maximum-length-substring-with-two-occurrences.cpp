class Solution {
public:
    int maximumLengthSubstring(string s) {

        int count[26] = {0};

        int left = 0;
        int ans = 0;

        for (int right = 0; right < s.length(); right++) {

            // Current character ka count badhao
            count[s[right] - 'a']++;

            // Agar koi character 2 se zyada ho gaya
            while (count[s[right] - 'a'] > 2) {

                // Left wale character ko window se remove karo
                count[s[left] - 'a']--;

                left++;
            }

            // Current valid window ki maximum length
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};