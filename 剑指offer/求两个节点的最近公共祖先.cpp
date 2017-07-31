//��������������ڵ������������ȡ�
//Ҫ���������������������������������������
//1��������ÿ���ڵ���parent����������
//2����������������������
//3��������ͨ����������������ʵ��ʱ�临�Ӷ�ΪO��N����
#include<vector>
#include<stack>
struct TreeNode
{
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
	TreeNode(int data)
		: val(data)
		, left(NULL)
		, right(NULL)
	{}
};

bool GetPath(TreeNode* root, vector<TreeNode*>& path, TreeNode* node)
{
	if (root == NULL)
		return false;
	if (root == node)
		return true;
	path.push_back(root);
	if (GetPath(root->left, path, node) || GetPath(root->right, path, node))
		return true;
	path.pop_back();
	return false;
}


TreeNode* FindCommonAncestor(TreeNode* root, TreeNode* root1, TreeNode* root2)
{
	if (root == NULL)
		return false;
	TreeNode* ancestor = NULL;
	vector<TreeNode*> v1;
	vector<TreeNode*> v2;
	GetPath(root, v1, root1);
	GetPath(root, v2, root2);
	int i = 0;
	while (i < v1.size() && i < v2.size() && v1[i] == v2[i])
	{
		ancestor = v1[i];
		i++;
	}
	return ancestor;
}


//ʵ�ַ�ʽ��
bool getpath(treenode* root, stack<treenode*>& path, treenode* node)
{
	if (root == null)
		return false;
	if (root == node)
		return true;
	path.push(root);
	if (getpath(root->left, path, node) || getpath(root->right, path, node))
		return true;
	path.pop();
	return false;
}

treenode* findcommonancestor(treenode* root, treenode* root1, treenode* root2)
{
	if (root == null)
		return false;
	treenode* ancestor = null;
	stack<treenode*> v1;
	stack<treenode*> v2;
	getpath(root, v1, root1);
	getpath(root, v2, root2);
	int diff = 0;
	while (v1.size() != v2.size())
	{
		if (v1.size() > v2.size())
			v1.pop();
		else
			v2.pop();
	}
	while (v1.top() != v2.top())
	{
		v1.pop();
		v2.pop();
	}
	return ancestor;
}