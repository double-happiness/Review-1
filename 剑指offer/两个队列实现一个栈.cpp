//两个队列实现一个栈
class Stack
{
	void Push(int data)
	{
		inQueue.push(data);
	}

	int Pop()
	{
		while (inQueue.size() > 0)
		{
			outQueue.push(inQueue.front());
			inQueue.pop();
		}
		int Front = outQueue.front();
		outQueue.pop();
		return Front;
	}
protected:
	queue<int> inQueue;
	queue<int> outQueue;
};
