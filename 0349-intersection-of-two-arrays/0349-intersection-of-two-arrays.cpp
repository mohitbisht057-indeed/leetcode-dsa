class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        // Final answer store karne ke liye
        vector<int> ans;

        // nums1 ke har element ko check karo
        for (int i = 0; i < nums1.size(); i++) {
            // nums2 ke har element se compare karo
            for (int j = 0; j < nums2.size(); j++) {
                // Agar dono equal hain
                if (nums1[i] == nums2[j]) {
                    // Check karo ki answer mein pehle se hai ya nahi
                    bool found = false;

                    for (int k = 0; k < ans.size(); k++) {
                        if (ans[k] == nums1[i]) {
                            found = true;
                            break;
                        }
                    }

                    // Agar answer mein nahi hai
                    if (found == false) {
                        ans.push_back(nums1[i]);
                    }

                    // nums2 mein match mil gaya
                    // Isliye inner loop se bahar aa jao
                    break;
                }
            }
        }

        return ans;
    }
};