class Solution {
public:
    bool isAnagram(string s, string t) {

        // Agar dono strings ki length different hai,
        // toh same characters kaise ho sakte hain?
        if (s.length() != t.length()) {
            return false;
        }

        // 26 lowercase letters ke liye 26 boxes
        // count[0] = a
        // count[1] = b
        // count[2] = c
        // ...
        // count[25] = z
        int count[26] = {0};

        // s ke characters ka count badhao
        for (int i = 0; i < s.length(); i++) {

            // s[i] ko uske alphabet index mein convert karo
            // Example:
            // 'a' - 'a' = 0
            // 'b' - 'a' = 1
            // 'c' - 'a' = 2
            count[s[i] - 'a']++;
        }

        // t ke characters ka count ghatao
        for (int i = 0; i < t.length(); i++) {

            // Agar s mein character +1 tha
            // aur t mein wahi character -1 hai,
            // toh end mein count 0 ho jayega
            count[t[i] - 'a']--;
        }

        // Agar sabhi characters ke counts 0 hain,
        // toh dono strings anagrams hain
        for (int i = 0; i < 26; i++) {

            if (count[i] != 0) {
                return false;
            }
        }

        return true;
    }
};