//删除一个无头单链表的非尾节点
void DelNontaiNode(ListNode* pos)
{
	ListNode* cur = NULL;
	cur = pos->next;
	pos->data = cur->data;
	pos->next = cur->next;
	free(cur);
}