//�������󻷵ĳ��ȣ�˵���Ѿ����ڻ�
int GetLoopListLen(ListNode* pMeetNode)
{
	if (pMeetNode == NULL)		//pMeetNodeΪ����ָ��������
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

