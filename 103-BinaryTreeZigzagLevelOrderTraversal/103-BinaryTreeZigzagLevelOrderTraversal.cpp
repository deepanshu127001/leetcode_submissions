        int level=0;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
public:
class Solution {

        vector<vector<int>> ans;
        queue<TreeNode*> q;

        if(root==nullptr)return ans;
        q.push(root);
        while(1){
            int q_size=q.size();
            vector<int> data;
            if(q_size==0)return ans;
            ++level;
            while(q_size>0){
[
