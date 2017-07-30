bool hasSubTree(TreeNode* root1, TreeNode* root2)
{
	if (root1 == NULL || root2 == NULL)
		return false;
	if (root1->data == root2->data)
	{
		if (isSubTree(root1, root2))
			return true;
	}
	return hasSubTree(root1->left, root2) || hasSubTree(root1->right, root2);
}

bool isSubTree(TreeNode* root1, TreeNode* root2)
{
	if (root1 == NULL)
		return true;
	if (root2 == NULL)
		return false;
	if (root1->data != root2->data)
		return false;
	return isSubTree(root1->left, root2->left) && isSubTree(root1->right, root2->right);
}