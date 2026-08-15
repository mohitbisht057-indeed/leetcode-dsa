class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int> ans(nums.size());

        int left = 0;
        int right = nums.size() - 1;
        int k = nums.size() - 1;

        while(left <= right)
        {
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if(leftSquare > rightSquare)
            {
                ans[k] = leftSquare;
                left++;
            }
            else
            {
                ans[k] = rightSquare;
                right--;
            }

            k--;
        }

        return ans;
    }
};