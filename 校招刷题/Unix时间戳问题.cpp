//����Unixʱ�������ʱ�䣬ÿ��30�죬ÿ�갴��360����㣬��ʼʱ��Ϊ1970/01/01 00:00:00
//������������ʾʱ��
//��������������10		����:1970/01/01 00:00:10
//����12345678			����:1970/05/23 21:21:18

#include <iostream>
#include <string>
using namespace std;


int main()
{
	long long second = 0;
	cin >> second;
	long long time[] = { 60, 60 * 60, 60 * 60 * 24, 60 * 60 * 24 * 30, 60 * 60 * 24 * 30 * 360 };
	long long start[] = { 00, 00, 00, 01, 01, 1970 };
	int ret;
	for (int i = 4; i >= 0; i--)
	{
		ret = second / time[i];
		start[i + 1] += ret;
		second -= ret*time[i];
	}
	start[0] += second;
	for (int i = 5; i >= 0; i--)
	{
		if (i>3)
			cout << start[i] << "/";
		else
		{
			cout << start[i] << " ";
			if (2 >= i&&i >= 1)
				cout << start[i] << ":";
		}
		
	}
	cout << endl;
	system("pause");
	return 0;
}