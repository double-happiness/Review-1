//14、实栈现一种数据结构SetOfStacks，由多个栈组成，其中每个栈的大小为size，当前一个
//栈填满时，新建一个栈。该数据结构支持与普通栈相同的push和pop操作
//测试：给定一个操作序列int[][2]ope(c++为vector&ltvector&ltint>>),每个操作的第一个数为操作
//类型，若为1，则为push操作，后一个数应为push的数字，若为2，则为pop操作，后一个数无意义
//清返回一个int[][](C++为vector&ltvector&ltint>>),为完成所有操作的SetOfStacks，顺序为从下
//到上，默认初始的SetOfStacks为空，保证数据的合法性
#include<vector>
#include<stack>
class SetOfStacks
{
public:
	vector<vector<int>> SetOfStack(vector<vector<int>> ope, int size)
	{
		stack<int> s;
		int count = 0;		//统计当前栈的数量
 		if (0 == size)
			return ope;
		for (int i = 0; i < ope.size(); i++)
		{
			for (int j = 0; j < 2; j++)
			{
				if (1 == ope[i][0])
				{
					if (s.size()<size)
						s.push(ope[i][1]);
					else
					{
						stack<int> s1;
						count++;
						s1.push(ope[i][1]);
					}
				}
				else
				{
					if (!s.empty())
						s.pop();
					else
					{
						if (0 != count--)
						{
							s.pop();
						}
					}
				}
			}
		}
		return ope;
	}
};