/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {

        // 1️⃣ Answer store karne ke liye empty vector
        vector<int> ans;

        // 2️⃣ Agar current node NULL hai
        // toh kuch nahi karna
        if (root == NULL)
            return ans;

        // 3️⃣ PEHLE LEFT side ka answer nikalo
        vector<int> left = inorderTraversal(root->left);

        // 4️⃣ Left ka answer apne answer mein daalo
        for (int x : left)
            ans.push_back(x);

        // 5️⃣ Ab CURRENT NODE ko add karo
        ans.push_back(root->val);

        // 6️⃣ Ab RIGHT side ka answer nikalo
        vector<int> right = inorderTraversal(root->right);

        // 7️⃣ Right ka answer bhi apne answer mein daalo
        for (int x : right)
            ans.push_back(x);

        // 8️⃣ Final answer return karo
        return ans;
    }
};