//�������к�Ϊĳһֵ��·��
//����һ�Ŷ�������һ����������ӡ���������н��ֵ�ĺ�Ϊ��������������·����·������Ϊ�����ĸ���㿪ʼ����һֱ��Ҷ����������Ľ���γ�һ��·��
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