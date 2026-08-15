class Solution {
public:
    int lengthOfLastWord(string s) {

        int i = s.length() - 1;   // String ke last index se start
        int count = 0;            // Last word ki length count karega

        // Step 1: Ending spaces skip karo
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Step 2: Last word ke characters count karo
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};