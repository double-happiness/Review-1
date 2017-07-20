//ʵ��һ��ջStack��Ҫ��ʵ��Push����ջ����Pop����ջ����
//Min��������Сֵ�Ĳ�������ʱ�临�Ӷ�ΪO(1) 
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
