class Solution {
public:
    bool wordPattern(string pattern, string s) {

        // String s ko words mein todne ke liye
        stringstream ss(s);

        // Har word temporarily yahan store hoga
        string word;

        // pattern letter -> word
        unordered_map<char, string> patternToWord;

        // word -> pattern letter
        unordered_map<string, char> wordToPattern;

        // Pattern aur words ko same position par check karenge
        int i = 0;

        while (ss >> word) {

            // Agar words pattern se zyada hain
            if (i >= pattern.length()) {
                return false;
            }

            char letter = pattern[i];

            // Case 1:
            // Letter pehle kisi word se mapped hai
            if (patternToWord.find(letter) != patternToWord.end()) {

                // Lekin current word different hai
                if (patternToWord[letter] != word) {
                    return false;
                }
            }

            // Case 2:
            // Word pehle kisi letter se mapped hai
            if (wordToPattern.find(word) != wordToPattern.end()) {

                // Lekin current letter different hai
                if (wordToPattern[word] != letter) {
                    return false;
                }
            }

            // Agar mapping pehle nahi thi,
            // toh dono directions mein mapping store karo
            patternToWord[letter] = word;
            wordToPattern[word] = letter;

            // Next pattern letter par jao
            i++;
        }

        // Pattern aur words ki quantity same honi chahiye
        if (i != pattern.length()) {
            return false;
        }

        return true;
    }
};