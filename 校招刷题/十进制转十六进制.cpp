//ʮ����ת��ʮ������
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int m, n;
	vector<int> v;
	char s[] = "0123456789ABCDEF";//�ֵ�


	cin >> m;
	while (m--)
	{
		cin >> n;

		v.clear();
		if (n == 0)
			v.push_back(0);

		while (n != 0)
		{
			v.push_back(n % 16);
			n = n / 16;
		}

		vector<int>::reverse_iterator rit;
		for (rit = v.rbegin(); rit != v.rend(); rit++)
			cout << s[*rit];//����Ƚ��м���

		cout << "H" << endl;
	}

	return 0;
}