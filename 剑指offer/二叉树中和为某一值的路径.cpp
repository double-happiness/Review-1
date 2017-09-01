//二叉树中和为某一值的路径
//输入一颗二叉树和一个整数，打印出二叉树中结点值的和为输入整数的所有路径。路径定义为从树的根结点开始往下一直到叶结点所经过的结点形成一条路径
vector<vector<int>> ret;
    vector<int> tmp;
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        if(NULL==root)
            return ret;
        tmp.push_back(root->val);
        bool leaf=(root->left==NULL)&&(root->right==NULL);
        if((expectNumber-root->val)==0 && leaf)
            ret.push_back(tmp);
        if(NULL!=root->left)
            FindPath(root->left,expectNumber-root->val);
        if(NULL!=root->right)
            FindPath(root->right,expectNumber-root->val);
        if(tmp.size()!=0)
            tmp.pop_back();
        return ret;
    }