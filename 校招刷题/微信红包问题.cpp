//΢�ź������
//��һ�������г��ֳ���һ��������ҵ����ط��򷵻�0
#include <iostream>
#include <vector>
using namespace std;

int GetValue(const vector<int>& gifts, int n)
{
	int count = 0;
	vector<int> v;
	int ret = 0;
	for (int i = 0; i < n; i++)
	{
		if (count == 0)
		{
			ret = gifts[i];
		}
		if (ret == gifts[i])
		{
			count++;
		}
		else
		{
			count--;
		}
	}
	return ret;
}