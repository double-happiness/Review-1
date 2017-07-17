//判断两个链表是否相交，若相交，求交点。（假设链表不带环）

PNode IsCrossWithCircle(PNode pHead1, PNode pHead2)
{
	Node* pCur = pHead1;
	Node* pRet = pHead2;
	size_t  size1 = Size(pHead1);
	size_t  size2 = Size(pHead2);
	int steps = size1 - size2;
	if (steps > 0)
	{
		while (--steps)
		{
			pCur = pCur->pNext;
		}
		else
		{
			while (--steps)
			{
				pRet = pRet->pNext;
			}
		}
	}
	while (pCur != pRet)
	{
		pCur = pCur->pNext;
		pRet = pRet->pNext;
	}
	return pCur;
}