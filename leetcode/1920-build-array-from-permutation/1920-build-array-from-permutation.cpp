class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {

        // Answer store karne ke liye empty vector
        vector<int> ans;

        // Array ke har index par jayenge
        for(int i = 0; i < nums.size(); i++)
        {
            // Pehle nums[i] niklega
            // Phir us value ko index bana kar nums mein dobara jayenge
            // Jo value milegi usko ans mein add karenge
            ans.push_back(nums[nums[i]]);
        }

        // Final answer return
        return ans;
    }
};