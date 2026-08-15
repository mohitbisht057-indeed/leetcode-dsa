class Solution {
public:
    bool isPalindrome(string s) {

        // Left pointer string ke first index se start karega
        int left = 0;

        // Right pointer string ke last index se start karega
        int right = s.length() - 1;


        // Jab tak left aur right ek dusre ko cross nahi karte,
        // tab tak characters compare karte rahenge
        while (left < right) {

            // Agar left wala character letter/number nahi hai
            // jaise: space, comma, colon etc.
            // toh us character ko ignore karke left ko aage badhao
            if (!isalnum(s[left])) {
                left++;
            }

            // Agar right wala character letter/number nahi hai
            // toh us character ko ignore karke right ko peeche lao
            else if (!isalnum(s[right])) {
                right--;
            }

            // Dono characters valid hain
            else {

                // Uppercase ko lowercase mein convert karke compare karo
                // Example: 'A' aur 'a' ko same maana jayega
                if (tolower(s[left]) != tolower(s[right])) {

                    // Characters different hain
                    // Isliye palindrome nahi hai
                    return false;
                }

                // Characters same hain
                // Ab dono pointers ko andar move karo
                left++;
                right--;
            }
        }

        // Agar loop ke andar koi mismatch nahi mila,
        // toh string palindrome hai
        return true;
    }
};