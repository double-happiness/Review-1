2.6	��������
���дһ����������������Ƿ�Ϊ���ġ�
����һ������ListNode* pHead���뷵��һ��bool�����������Ƿ�Ϊ���ġ�
����������
{ 1, 2, 3, 2, 1 }
���أ�true
{ 1, 2, 3, 2, 3 }
���أ�false

struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};
class Palindrome {
public:
	bool isPalindrome(ListNode* pHead) {
		// write code here
		string s;
		if (!pHead || !(pHead->next))
			return true;
		while (pHead){
			//s+=to_string(pHead->val);
			s.push_back(pHead->val);
			pHead = pHead->next;
		}
		string s2 = s;
		reverse(s2.begin(), s2.end());
		if (s == s2)
			return true;
		else
			return false;

	}
};