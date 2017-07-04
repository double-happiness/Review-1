2.6	回文链表
请编写一个函数，检查链表是否为回文。
给定一个链表ListNode* pHead，请返回一个bool，代表链表是否为回文。
测试样例：
{ 1, 2, 3, 2, 1 }
返回：true
{ 1, 2, 3, 2, 3 }
返回：false

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