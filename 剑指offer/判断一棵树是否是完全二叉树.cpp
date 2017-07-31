判断一棵树是否是完全二叉树。提示：层序遍历变型题。
#include<vector>
#include<queue>
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

bool IsCompleteTree(TreeNode* root)
{
	if (root == NULL)
		return true;
	queue<TreeNode*> q;
	q.push(root);
	bool flag = false;
	while (!q.empty())
	{
		TreeNode* front = q.front();
		q.pop();
		if (flag)
		{
			if (front->left || front->right)
				return false;
		}
		else
		{
			if (front->left&&front->right)
			{
				q.push(front->left);
				q.push(front->right);
			}
			else if (front->right)
				return false;
			else if (front->left)
			{
				q.push(front->left);
				flag = true;
			}
			else
				flag = true;
		}
	}
	return true;
}