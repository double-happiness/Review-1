//14��ʵջ��һ�����ݽṹSetOfStacks���ɶ��ջ��ɣ�����ÿ��ջ�Ĵ�СΪsize����ǰһ��
//ջ����ʱ���½�һ��ջ�������ݽṹ֧������ͨջ��ͬ��push��pop����
//���ԣ�����һ����������int[][2]ope(c++Ϊvector&ltvector&ltint>>),ÿ�������ĵ�һ����Ϊ����
//���ͣ���Ϊ1����Ϊpush��������һ����ӦΪpush�����֣���Ϊ2����Ϊpop��������һ����������
//�巵��һ��int[][](C++Ϊvector&ltvector&ltint>>),Ϊ������в�����SetOfStacks��˳��Ϊ����
//���ϣ�Ĭ�ϳ�ʼ��SetOfStacksΪ�գ���֤���ݵĺϷ���
#include<vector>
#include<stack>
class SetOfStacks
{
public:
	vector<vector<int>> SetOfStack(vector<vector<int>> ope, int size)
	{
		stack<int> s;
		int count = 0;		//ͳ�Ƶ�ǰջ������
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