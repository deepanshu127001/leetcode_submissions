 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if(root!=nullptr){
    vector<int> ans;
            postorderTraversal(root->left);
        }
    }
            postorderTraversal(root->right);
            ans.push_back(root->val);
        return ans;
};
[
