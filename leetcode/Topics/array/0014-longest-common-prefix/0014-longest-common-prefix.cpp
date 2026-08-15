class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // Sabse chhoti string ki length find karenge
        int minLen = strs[0].length();

        for (int i = 1; i < strs.size(); i++) {
            minLen = min(minLen, (int)strs[i].length());
        }

        string answer = "";

        // i = character ka index
        for (int i = 0; i < minLen; i++) {

            // j = kaunsi string check kar rahe hain
            for (int j = 1; j < strs.size(); j++) {

                // Agar current character different hai
                if (strs[0][i] != strs[j][i]) {
                    return answer;
                }
            }

            // Sab strings mein same character mila
            answer += strs[0][i];
        }

        return answer;
    }
};