//15、两个栈实现一个队列
//要求能够完成队列的push和pop操作
#include<stack>
class Queue
{
public:
	void Push(int data)
	{
		inputStack.push(data);
	}

	int Pop()
	{
		if (inputStack.empty() && outputStack.size())
			return;
		if (outputStack.empty())
		{
			while (!inputStack.empty())
			{
				outputStack.push(inputStack.top());
				inputStack.pop();
			}
			int ret = outputStack.top();
			outputStack.pop();
			return ret;
		}
		
	}
protected:
	stack<int> inputStack;
	stack<int> outputStack;
};