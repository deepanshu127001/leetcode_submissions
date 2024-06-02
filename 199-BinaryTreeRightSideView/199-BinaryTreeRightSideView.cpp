        return ans;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> ans = levelOrder(root);
        vector<int> rightNodes;
        for (vector<int> vec : ans) {
            rightNodes.push_back(vec[vec.size() - 1]);
        }
        return rightNodes;
    }
};
[
