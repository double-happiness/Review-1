//合并两个有序链表

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) 
	{}
};

//常规写法
ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
{
	if (pHead1 == NULL && pHead2 == NULL)
		return NULL;
	if (pHead1 == NULL)
		return pHead2;
	if (pHead2 == NULL)
		return pHead1;

	ListNode* head = NULL;
	ListNode* next = NULL;
	
	if (pHead1->val > pHead2->val)
		head = pHead2;
	else
		head = pHead1;

	while (pHead1 != NULL && pHead2 != NULL){
		if (pHead1->val > pHead2->val)
		{
			next = pHead2->next;
			pHead2->next = pHead1;
			pHead2 = next;
		}
		else{
			next = pHead1->next;
			pHead1->next = pHead2;
			pHead1 = next;
		}
	}

	return head;
}

//递归版本实现
ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
{
	if (pHead1 == NULL) 
		return pHead2;
	if (pHead2 == NULL) 
		return pHead1;
	ListNode *mergeList = NULL;
	if (pHead1->val < pHead2->val) {
		mergeList = pHead1;
		mergeList->next = Merge(pHead1->next, pHead2);
	}
	else {
		mergeList = pHead2;
		mergeList->next = Merge(pHead1, pHead2->next);
	}
	return mergeList;
}