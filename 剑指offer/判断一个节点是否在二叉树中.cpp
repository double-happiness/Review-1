struct TreeNode
{
	int data;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int val)
		: data(val)
		, left(NULL)
		, right(NULL)
	{}
};
bool FindNode(TreeNode* root, TreeNode* node)
{
	if (NULL == root)
		return false;
	if (root->data == node->data)
		return true;
	return FindNode(root->left, node) || FindNode(root->right, node);
}