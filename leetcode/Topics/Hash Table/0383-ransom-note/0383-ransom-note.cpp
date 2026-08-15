class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int count[26] = {0};

        // Magazine ke letters count karo
        for (int i = 0; i < magazine.length(); i++) {
            count[magazine[i] - 'a']++;
        }

        // RansomNote ke letters check karo
        for (int i = 0; i < ransomNote.length(); i++) {

            // Required letter available nahi hai
            if (count[ransomNote[i] - 'a'] == 0) {
                return false;
            }

            // Letter use kar liya
            count[ransomNote[i] - 'a']--;
        }

        return true;
    }
};