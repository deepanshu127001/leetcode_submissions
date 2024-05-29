 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(root!=nullptr){
    vector<int> ans;
            ans.push_back(root->val);
        }
    }
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        return ans;
[
