//ɾ��һ����ͷ������ķ�β�ڵ�
void DelNontaiNode(ListNode* pos)
{
	ListNode* cur = NULL;
	cur = pos->next;
	pos->data = cur->data;
	pos->next = cur->next;
	free(cur);
}