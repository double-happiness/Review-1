vector<vector<int> > Print(TreeNode* pRoot)
    {
        vector<vector<int>> vec;
        if(NULL==pRoot)
            return vec;
        queue<TreeNode*> q;
        q.push(pRoot);
        while(!q.empty()){
            ;int size=q.size();
            vector<int> v;
            while(size--){
                TreeNode* front=q.front();
                q.pop();
                v.push_back(front->val);
                if(front->left!=NULL)
                    q.push(front->left);
                if(front->right!=NULL)
                    q.push(front->right);
            }
            vec.push_back(v);
        }
        return vec;
    }