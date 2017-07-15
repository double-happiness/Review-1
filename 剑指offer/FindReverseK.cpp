//查找链表中的倒数第k个节点
struct ListNode
{
	int val;
	struct ListNode* next;
	ListNode(int data)
		:val(data), next(NULL)
	{}
};

ListNode* FindReverseK(ListNode* pHead,int k)
{
	if (k == 0 || pHead == NULL)
		return pHead;
	ListNode* pFirst = pHead;
	ListNode* pSecond = pHead;
	for (int i = 0; i < k - 1; i++)
	{
		if (pFirst->next != NULL)
			pFirst = pFirst->next;
		else
			return NULL;
	}
	while (pFirst->next != NULL)
	{
		pFirst = pFirst->next;
		pSecond = pSecond->next;
	}
	return pSecond;
}
