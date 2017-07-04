链式A+B
题目描述：
有两个用链表表示的整数，每个结点包含一个数位。这些数位是反向存放的，也就是个位排在链表的首部。编写函数对这两个整数求和，并用链表形式返回结果。
给定两个链表ListNode* A，ListNode* B，请返回A + B的结果(ListNode*)。
测试样例：
{ 1, 2, 3 }, { 3, 2, 1 }
返回：{ 4, 4, 4 }


struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};
class Plus {
public:
	ListNode* plusAB(ListNode* a, ListNode* b) {
		int c = 0;			//用于表示进位
		int sum = 0;
		ListNode* result = new ListNode(0);
		ListNode* cur = result;
		while (NULL != a || NULL != b || c != 0)
		{
			int _a = (a == NULL) ? 0 : a->val;	
			int _b = (b == NULL) ? 0 : b->val;
			sum = _a + _b + c;
			c = sum / 10;
			ListNode* pNode = new ListNode(sum % 10);
			cur->next = pNode;
			cur = pNode;
			a = (a == NULL) ? 0 : a->next;
			b = (b == NULL) ? 0 : b->next;
		}
		
		return result->next;
	}
};