class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // Sabse pehla price hi minimum maan lo
        // Example:
        // prices = [7,1,5,3,6,4]
        // minPrice = 7
        int minPrice = prices[0];

        // Abhi tak koi profit nahi hua
        int maxProfit = 0;

        // Index 1 se start karo
        // Kyuki index 0 already minPrice me store ho chuka hai
        for (int i = 1; i < prices.size(); i++) {

            // Agar current price aur chhota mil gaya
            // Example:
            // 1 < 7
            if (prices[i] < minPrice) {

                // Naya minimum update karo
                minPrice = prices[i];

            } else {

                // Nahi to profit calculate karo
                // Example:
                // Current Price = 5
                // Min Price = 1
                // Profit = 5 - 1 = 4
                int profit = prices[i] - minPrice;

                // Agar ye profit purane profit se bada hai
                // To maxProfit update karo
                if (profit > maxProfit) {
                    maxProfit = profit;
                }
            }
        }

        // Final answer return karo
        return maxProfit;
    }
};