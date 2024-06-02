        queue<TreeNode*> q;

        if(root==nullptr)return ans;
        q.push(root);
        while(1){
            int q_size=q.size();
            vector<int> data;
            if(q_size==0)return ans;
            ++level;
            while(q_size>0){
                TreeNode *tempNode = q.front();
                q.pop();
                data.push_back(tempNode->val);
                if(tempNode->left)q.push(tempNode->left);
                if(tempNode->right)q.push(tempNode->right);
                q_size--;
            }
[3,9,20,null,null,15,7]
