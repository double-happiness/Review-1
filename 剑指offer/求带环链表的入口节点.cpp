//若带环求环的入口点？
ListNode* EntryNodeOfLoop(ListNode* pHead, ListNode* pMeet)
{
	if (NULL == pHead && NULL == pMeet)
	{
		return NULL;
	}
	ListNode* pFirst = pHead;
	ListNode* pSecond = pMeet;
	while (pFirst != pMeet)
	{
		pFirst = pFirst->next;
		pSecond = pSecond->next;
	}
	return pFirst;
}