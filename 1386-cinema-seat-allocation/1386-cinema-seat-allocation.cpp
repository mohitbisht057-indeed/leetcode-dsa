class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        unordered_map<int, set<int>> reserved;

        // Reserved seats ko row ke according store karo
        for (auto seat : reservedSeats) {
            reserved[seat[0]].insert(seat[1]);
        }

        int ans = 0;

        // Sirf unhi rows ko check karo jahan reservation hai
        for (auto& [row, seats] : reserved) {

            // Left block: 2,3,4,5
            bool left = true;

            for (int seat = 2; seat <= 5; seat++) {
                if (seats.count(seat)) {
                    left = false;
                    break;
                }
            }

            // Right block: 6,7,8,9
            bool right = true;

            for (int seat = 6; seat <= 9; seat++) {
                if (seats.count(seat)) {
                    right = false;
                    break;
                }
            }

            if (left && right) {
                ans += 2;
            }
            else if (left || right) {
                ans += 1;
            }
            else {

                // Middle block: 4,5,6,7
                bool middle = true;

                for (int seat = 4; seat <= 7; seat++) {
                    if (seats.count(seat)) {
                        middle = false;
                        break;
                    }
                }

                if (middle) {
                    ans += 1;
                }
            }
        }

        // Jitni rows mein reservation nahi hai,
        // har row mein 2 groups aa sakte hain.
        ans += (n - reserved.size()) * 2;

        return ans;
    }
};