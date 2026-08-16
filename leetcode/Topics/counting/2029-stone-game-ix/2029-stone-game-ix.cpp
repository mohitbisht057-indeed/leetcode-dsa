class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {

        // Count stones based on their remainder when divided by 3
        int count[3] = {0, 0, 0};

        for (int stone : stones) {
            count[stone % 3]++;
        }

        // If remainder-0 stones are even
        if (count[0] % 2 == 0) {
            return count[1] > 0 && count[2] > 0;
        }

        // If remainder-0 stones are odd
        return abs(count[1] - count[2]) > 2;
    }
};