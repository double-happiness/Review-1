//����ջʵ��һ������
class Queue
{
	void Push(int data)
	{
		inStack.push(data);
	}

	int Pop()
	{
		if (inStack.empty() && outStack.size())
			return -1;
		if (!outStack.empty())
		{
			while (!inStack.empty())
			{
				outStack.push(inStack.top());
				inStack.pop();
			}
			int top = outStack.top();
			outStack.pop();
			return ret;
		}

	}
private:
	stack<int> inStack;
	stack<int> outStack;
};