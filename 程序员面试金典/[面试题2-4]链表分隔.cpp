3、链表分割
题目描述：
编写代码，以给定值x为基准将链表分割成两部分，所有小于x的结点排在大于或等于x的结点之前
给定一个链表的头指针 ListNode* pHead，请返回重新排列后的链表的头指针。
注意：分割以后保持原来的数据顺序不变。

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