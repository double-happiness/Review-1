//判断两个链表是否相交，若相交，求交点。（假设链表可能带环）【升级版】

int CheckCrossWithCircle(PNode pHead1, PNode pHead2)//判断链表是否相交(有可能带环)  
{
	PNode pMeetNode1 = NULL;
	PNode pMeetNode2 = NULL;
	if (NULL == pHead1 || NULL == pHead2)
		return 0;
	pMeetNode1 = CheckCircle(pHead1);
	pMeetNode2 = CheckCircle(pHead2);
	if (NULL == pMeetNode1 && NULL == pMeetNode2)//两个链表都不带环  
	{
		PNode p1 = pHead1;
		PNode p2 = pHead2;
		while (p1->next)
		{
			p1 = p1->next;
		}
		while (p2->next)
		{
			p2 = p2->next;
		}
		if (p1 == p2)
			return 1;
		else
			return 0;
	}
	else if ((NULL == pMeetNode1 && pMeetNode2) ||
	(NULL == pMeetNode2 && pMeetNode1))//一个带环一个不带环  
		return 0;
	else//两个都带环  
	{
		PNode pM1 = pMeetNode1;
		PNode pM2 = pMeetNode2;
		while (pM1 != pM1->next)
		{
			pM1 = pM1->next;
			if (pM1 == pM2)
			break;
		}
	if (pM1 == pM2)
		return 2;
	else
		return 0;
	}
}
