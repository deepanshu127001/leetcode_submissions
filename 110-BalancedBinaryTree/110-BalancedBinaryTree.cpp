            if (diff > 1)
            int diff = abs(lh - rh);
            int rh = height(root->right);
            int lh = height(root->left);
        if (root != nullptr) {
            inorderUtil(root->left, ans);
    void inorderUtil(TreeNode* root, bool& ans) {
                ans = ans & false;
            inorderUtil(root->right, ans);
        }
    }
    bool isBalanced(TreeNode* root) {
        // inorder traversal
[
