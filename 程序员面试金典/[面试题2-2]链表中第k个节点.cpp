//2.2�����еĵ�k���ڵ�
//����һ����������������е�����k�����

struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};
ListNode* FindKthToTail(ListNode* pListHead, unsigned int k)
{
	if (NULL == pListHead || k <= 0)
		return NULL;
	ListNode* first = pListHead;
	listNode* second = pListHead;
	for (int i = 0; i < k - 1; i++)
	{
		if (NULL != first->next)
		{
			first = first->next;
		}
		else
		{
			return NULL;
		}
	}
	while (NULL != first->next)
	{
		first = first->next;
		second = second->next;
	}
	return second;
}