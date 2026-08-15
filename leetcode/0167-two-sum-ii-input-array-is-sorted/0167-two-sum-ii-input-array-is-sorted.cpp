class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        // Left pointer ko first element par rakha
        int left = 0;

        // Right pointer ko last element par rakha
        int right = numbers.size() - 1;

        // Jab tak left aur right alag hain,
        // tab tak pairs check karte rahenge
        while(left < right) {

            // Left aur right values ka sum nikala
            int sum = numbers[left] + numbers[right];

            // Agar sum target ke equal hai,
            // toh hume answer mil gaya
            if(sum == target) {

                // Question 1-based index maang raha hai,
                // isliye +1 kar rahe hain
                return {left + 1, right + 1};
            }

            // Agar sum target se bada hai,
            // toh sum ko chhota karna hai
            // isliye right pointer left ki taraf move karega
            else if(sum > target) {
                right--;
            }

            // Agar sum target se chhota hai,
            // toh sum ko bada karna hai
            // isliye left pointer right ki taraf move karega
            else {
                left++;
            }
        }

        // Agar pair nahi mila
        return {};
    }
};