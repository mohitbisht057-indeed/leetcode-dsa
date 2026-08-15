class Solution {
public:

    // Function jo answer return karega
    vector<int> plusOne(vector<int>& digits) {

        // Last digit se start karo
        // Example:
        // [1,2,9]
        //      ^
        for (int i = digits.size() - 1; i >= 0; i--) {

            // Agar current digit 9 se chhoti hai
            // Example:
            // [1,2,3]
            //      ^
            // 3 < 9 -> YES
            if (digits[i] < 9) {

                // Current digit me 1 add karo
                // [1,2,3] -> [1,2,4]
                digits[i]++;

                // Answer mil gaya, return kar do
                return digits;
            }

            // Agar digit 9 hai
            // Example:
            // [1,2,9]
            //      ^
            // 9 + 1 = 10
            // Isliye 9 ko 0 bana do
            digits[i] = 0;

            // Carry automatically next iteration me
            // previous digit tak chali jayegi
        }

        // Agar loop yahan tak aa gaya
        // Matlab saare digits 9 the
        // Example:
        // [9,9,9]
        // Loop ke baad:
        // [0,0,0]

        // Starting me 1 insert karo
        // [0,0,0] -> [1,0,0,0]
        digits.insert(digits.begin(), 1);

        // Final answer return karo
        return digits;
    }
};