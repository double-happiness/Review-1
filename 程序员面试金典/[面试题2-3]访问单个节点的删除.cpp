���ʵ����ڵ��ɾ��
��Ŀ������
ʵ��һ���㷨��ɾ�����������м��ĳ����㣬�ٶ���ֻ�ܷ��ʸý�㡣
������ɾ���Ľڵ㣬��ִ��ɾ�����������ýڵ�Ϊβ�ڵ㣬����false�����򷵻�true


struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};

bool removeNode(ListNode* pNode) {
	if (NULL == pNode || NULL == pNode->next)
		return false;
	ListNode* pNext = pNode->next;
	pNode->val = pNext->val;
	pNode->next = pNext->next;
	free(pNext);
	pNext = NULL;
	return true;
}
