//复杂链表的复制
typedef struct Node
{
	int data;
	struct Node* next;
	struct Node* random;
}Node,*pNode;

pNode CreateListNode(int data)
{
	pNode newNode = (pNode)malloc(sizeof(Node));
	if (NULL == newNode)
	{
		cout << "not fo memory" << endl;
		exit(1);
	}
	newNode->data = data;
	newNode->next = NULL;
	newNode->random = NULL;
	return newNode;
}

pNode CloneComplexList(pNode pHead)
{
	if (NULL == pHead)
	{
		return NULL;
	}
	pNode cur = pHead;
	pNode pNext = NULL;
	pNode pNew = NULL;

	while (cur)	//复制节点到其后的每一个位置
	{
		pNew = CreateListNode(cur->data);
		pNew->next = cur->next;
		cur->next = pNew;
		cur = pNew->next;
	}

	//节点赋值
	cur = pHead;
	pNext = NULL;
	while (cur)
	{
		pNext = cur->next;
		pNext->random = cur->random;
		cur = pNext->next;
	}
	//拆链
	pNew = pHead->next;
	pNext = pNew;
	cur = pNext->next;
	pHead->next = cur;
	while (cur)
	{
		pNext->next = cur->next;
		pNext = pNext->next;
		cur = pNext->next;
		cur = cur->next;
	}
	return pNew;
}