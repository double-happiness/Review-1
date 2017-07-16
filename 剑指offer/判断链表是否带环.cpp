struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) 
		:val(x), next(NULL) 
	{}
};

//判断链表是否带环？
ListNode* IsLoop(ListNode* pHead)
{
	if (NULL == pHead)
	{
		return NULL;
	}
	ListNode* pfast = pHead;
	ListNode* pslow = pHead;
	while (pHead->next != NULL && pHead->next->next != NULL)
	{
		pfast = pfast->next->next;
		pslow = pslow->next;
		if (pfast == pslow)
		{
			return pslow;
		}
	}
	return NULL;
}