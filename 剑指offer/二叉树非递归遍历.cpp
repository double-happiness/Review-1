//实现二叉树的前序/中序/后序非递归遍历
#include<stack>
struct Node
{
	int val;
	struct Node* left;
	struct Node* right;
};
//前序
void PreInorde(Node* root)
{
	if (root == NULL)
		return;
	Node* cur = root;
	stack<Node*> s;
	while (cur || !s.empty())
	{
		while (cur)
		{
			cout << cur->val << " ";
			s.push(cur);
			cur = cur->left;
		}
		Node* top = s.top();
		s.pop();
		if (top->right)
			cur = top->right;
	}
}
//中序
void InOrder(Node* root)
{
	if (root == NULL)
		return;
	stack<Node*> s;
	Node* cur = root;
	while (cur || !s.empty())
	{
		while (cur)
		{
			s.push(cur);
			cur = cur->left;
		}
		cout << cur->val << " ";
		Node* top = s.top();
		s.pop();
		if (top->right)
			cur = top->right;
	}
}
//后序
void BackOrder(Node* root)
{
	if (NULL == root)
		return;
	stack<Node*> s;
	Node* cur = root;
	Node* pre = NULL;
	while (cur || !s.empty())
	{
		while (cur)
		{
			s.push(cur);
			cur = cur->left;
		}
		Node* top = s.top();
		if (top->right == NULL || top->right == pre)
		{
			cout << cur->val << " ";
			pre = top;
			s.pop();
		}
		else
		{
			cur = top->right;
		}
	}
}