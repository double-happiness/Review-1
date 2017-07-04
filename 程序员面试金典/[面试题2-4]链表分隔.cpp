3������ָ�
��Ŀ������
��д���룬�Ը���ֵxΪ��׼������ָ�������֣�����С��x�Ľ�����ڴ��ڻ����x�Ľ��֮ǰ
����һ�������ͷָ�� ListNode* pHead���뷵���������к�������ͷָ�롣
ע�⣺�ָ��Ժ󱣳�ԭ��������˳�򲻱䡣

```
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};

class Partition {
public:
	ListNode* partition(ListNode* pHead, int x) {
		if (NULL== pHead || NULL == pHead->next)
			return pHead;
		ListNode* SmallStart = new ListNode(0);
		ListNode* SmallEnd = SmallStart;
		ListNode* BigStart = new ListNode(0);
		ListNode* BigEnd = BigStart;
		while (pHead)
		{
			if (pHead->val < x)
			{
				SmallEnd->next = pHead;
				SmallEnd = SmallEnd->next;
			}
			else
			{
				BigEnd->next = pHead;
				BigEnd = BigEnd->next;
			}
			pHead = pHead->next;
		}
		SmallEnd->next = BigStart->next;
		BigEnd->next = NULL;
		delete BigStart;
		BigEnd = NULL;
		ListNode* result = SmallStart->next;
		delete SmallStart;
		SmallStart = NULL;
		return result;
	}
};