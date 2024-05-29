 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr && q==nullptr)return true;
    }
        // if((p==nullptr&&q!=nullptr) || (q==nullptr&&p!=nullptr)) can be written as
        if(p==nullptr||q==nullptr)
            return false;
        return (isSameTree(p->left,q->left)&&isSameTree(p->right,q->right));

        if(p->val!=q->val)return false;
};
[
