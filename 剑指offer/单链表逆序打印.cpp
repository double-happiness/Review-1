//ÄæÐò´òÓ¡
void ReversePrintList(listNode* pHead)
{
	if (pHead == NULL)
		return NULL;
	ReversePrintList(pHead->next);
	cout << pHead->next;
}