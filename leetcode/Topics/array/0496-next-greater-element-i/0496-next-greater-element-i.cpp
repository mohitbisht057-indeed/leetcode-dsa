class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        stack<int> st;

        // Har number ka next greater element yahan store hoga
        unordered_map<int, int> mp;

        // nums2 ko left se right check karenge
        for (int x : nums2) {

            // Agar stack ka TOP x se chhota hai,
            // toh x uska next greater element hai
            while (!st.empty() && st.top() < x) {

                mp[st.top()] = x;

                // Jiska answer mil gaya, use stack se hata do
                st.pop();
            }

            // Current number ko stack mein daal do
            st.push(x);
        }

        // nums1 ke answers store karne ke liye
        vector<int> ans;

        // nums1 ke har number ka answer nikalo
        for (int x : nums1) {

            // Agar map mein answer hai toh woh lo,
            // warna -1
            if (mp.find(x) != mp.end())
                ans.push_back(mp[x]);
            else
                ans.push_back(-1);
        }

        return ans;
    }
};