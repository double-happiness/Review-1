typedef struct Node
{
	int val;
	struct Node* left;
	struct Node* right;
	Node(const int& data)
		:val(data)
		, left(NULL)
		, right(NULL)
	{}
}Node;

template<class T>
void ThiefOrder(Node* root)
{
	if (root == NULL)
		return;
	Node* cur = root;
	queue<Node*> q;
	q.push(cur);
	while (cur)
	{
		Node* front = q.front();
		cout << front->val << endl;
		if (front->left != NULL)
		{
			q.push(front->left);
		}
		if (front->right != NULL)
		{
			q.push(front->right);
		}
		q.pop();
	}
}