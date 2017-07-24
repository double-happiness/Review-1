//求二叉树叶子节点的个数/求二叉树第k层的节点个数
typedef struct Node
{
	int val;
	struct Node* _left;
	struct Node* _right;
	Node(const int& data)
		:val(data)
		, _left(NULL)
		, _right(NULL)
	{}
}Node;

void _GetKLevelSize(Node* root, const size_t k,
	size_t level, size_t& count)
{
	if (root == NULL)
	{
		return;
	}

	if (level == k)
	{
		count++;
		return;
	}

	_GetKLevelSize(root->_left, k, level + 1, count);
	_GetKLevelSize(root->_right, k, level + 1, count);
}

size_t GetKLevelSize(size_t k)
{
	assert(k > 0);
	size_t count = 0;
	size_t level = 1;
	_GetKLevelSize(_root, k, level, count);

	return count;
}