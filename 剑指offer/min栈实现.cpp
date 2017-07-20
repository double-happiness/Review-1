//实现一个栈Stack，要求实现Push（出栈）、Pop（入栈）、
//Min（返回最小值的操作）的时间复杂度为O(1) 
#include<iostream>
#include<stack>
using namespace std;

template<class T>
class Stack
{
public:
	void Push(const T data)
	{
		s1.push(data);
		int top = s1.top();
		if (s2.empty())
			s2.push(top);
		else
		{
			if (!s1.empty() && s1.top() < s2.top())
			{
				s2.push(s1.top());
			}
			s1.pop();
		}
	}
	void Pop()
	{
		if (!s1.empty())
		{
			s1.pop();
		}
	}

	int Min()
	{
		return s2.top();
	}
protected:
	stack<int> s1;
	stack<int> s2;
};
