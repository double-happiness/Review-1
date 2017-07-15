Á´±íÄæÖÃ
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x)
		:val(x), next(NULL) 
	{}
};

ListNode* ReverseList(ListNode* pHead)
{
	if (NULL == pHead)
		return pHead;
	ListNode* pPrev = NULL;	
	ListNode* pCur = pHead;
	ListNode* rHead = pHead;
	while (pCur != NULL)
	{
		ListNode* pNext = pCur->next;
		if (pNext != NULL)
			rHead = pNext;
		pCur->next = pPrev;
		pPrev = pCur;
		pCur = pNext;
	}
	return rHead;
}
