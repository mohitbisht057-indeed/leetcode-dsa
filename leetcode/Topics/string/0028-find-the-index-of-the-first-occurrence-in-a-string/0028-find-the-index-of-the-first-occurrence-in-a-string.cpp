class Solution {
public:
    int strStr(string haystack, string needle) {

        int n = haystack.length();   // haystack ki length
        int m = needle.length();     // needle ki length

        // i = needle ko haystack mein kis position se start karna hai
        //
        // n - m = last possible starting position
        //
        // Example:
        // haystack length = 9
        // needle length   = 3
        // last starting position = 9 - 3 = 6
        //
        // i = 0,1,2,3,4,5,6
        // i = 7 par needle ke 3 characters fit nahi honge
        for (int i = 0; i <= n - m; i++) {

            // Har naye starting position par
            // needle ko beginning se check karenge
            int j = 0;

            // j = needle ka index
            //
            // i + j = haystack ka current index
            //
            // Example i = 1:
            // j = 0 → haystack[1] vs needle[0]
            // j = 1 → haystack[2] vs needle[1]
            // j = 2 → haystack[3] vs needle[2]
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }

            // j == m ka matlab:
            // needle ke SAARE characters match ho gaye
            //
            // Example:
            // needle = "sad"
            // m = 3
            //
            // s matched → j = 1
            // a matched → j = 2
            // d matched → j = 3
            //
            // j == m → 3 == 3 → complete needle mil gayi
            if (j == m) {
                return i;   // jis position se needle start hui
            }
        }

        // Puri haystack check karne ke baad bhi needle nahi mili
        return -1;
    }
};