//2.2链表中的第k个节点
//输入一个链表，输出该链表中倒数第k个结点

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