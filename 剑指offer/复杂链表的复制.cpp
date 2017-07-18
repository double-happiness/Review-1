//��������ĸ���
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

	while (cur)	//���ƽڵ㵽����ÿһ��λ��
	{
		pNew = CreateListNode(cur->data);
		pNew->next = cur->next;
		cur->next = pNew;
		cur = pNew->next;
	}

	//�ڵ㸳ֵ
	cur = pHead;
	pNext = NULL;
	while (cur)
	{
		pNext = cur->next;
		pNext->random = cur->random;
		cur = pNext->next;
	}
	//����
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