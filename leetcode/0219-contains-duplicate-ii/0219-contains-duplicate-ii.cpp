class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        // Number -> uska latest index store karenge
        unordered_map<int, int> mp;

        // Array ko left se right traverse karo
        for (int i = 0; i < nums.size(); i++) {

            // Check karo kya ye number pehle aa chuka hai
            if (mp.find(nums[i]) != mp.end()) {

                // Same number ka previous index
                int previousIndex = mp[nums[i]];

                // Current index aur previous index ka distance
                if (i - previousIndex <= k) {
                    return true;
                }
            }

            // Current index ko latest index bana do
            mp[nums[i]] = i;
        }

        // Koi valid duplicate nahi mila
        return false;
    }
};