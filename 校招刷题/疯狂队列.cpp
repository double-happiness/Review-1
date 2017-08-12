//╥Х©Я╤сап
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	if (n<1 || n>50)
		return 1;
	int num = 0;	//height
	int ret = 0;	//tmp
	int total = 0;	//sum tmp
	vector<int> vec;
	while (cin >> num)
	{
		vec.push_back(num);
		if (n == vec.size())
			break;
	}
	for (int i = 0; i < n - 1; i++)
	{
		ret = abs((vec[i] - vec[i + 1]));
		total += ret;
	}
	cout << total << endl;
	system("pause");
	return 0;
}