//微信红包问题
//求一个数组中出现超过一半的数，找到返回否则返回0
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