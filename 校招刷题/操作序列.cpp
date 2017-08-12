//输入一个n为数组的个数，在输入n个数为数组的元素，从中一次取出一个数，
//放到另外一个数组中，每放一次数据逆序一次，放完输出数组
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	cout << endl;
	vector<int> vec;
	vector<int> ret;
	int num = 0;
	while (cin >> num)
	{
		vec.push_back(num);
		if (n == vec.size())
			break;
	}
	for (int i = 0; i < n;i++)
	{
		ret.push_back(vec[i]);
		reverse(ret.begin(), ret.end());
	}
	for (int i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			cout << ret[i] << " ";
		}
		else
			cout << ret[i];
		
	}
	cout << endl;
	system("pause");
	return 0;
}