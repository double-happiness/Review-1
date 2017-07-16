//若带环求环的长度？说明已经存在环
int GetLoopListLen(ListNode* pMeetNode)
{
	if (pMeetNode == NULL)		//pMeetNode为快慢指针相遇点
		return 0;
	int count = 0;
	ListNode* cur = pMeetNode;
	while (cur != pMeetNode)
	{
		++count;
		cur = cur->next;
	}
	return count;
}

