��ʽA+B
��Ŀ������
�������������ʾ��������ÿ��������һ����λ����Щ��λ�Ƿ����ŵģ�Ҳ���Ǹ�λ����������ײ�����д������������������ͣ�����������ʽ���ؽ����
������������ListNode* A��ListNode* B���뷵��A + B�Ľ��(ListNode*)��
����������
{ 1, 2, 3 }, { 3, 2, 1 }
���أ�{ 4, 4, 4 }


struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};
class Plus {
public:
	ListNode* plusAB(ListNode* a, ListNode* b) {
		int c = 0;			//���ڱ�ʾ��λ
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