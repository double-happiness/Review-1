//����һ�����Ľ׳˺����м���0
#include<iostream>
using namespace std;

int main()
{
	int num = 0;
	int n = 0;
	printf("please input n:");
	scanf("%d", &n);
	while (n)
	{
		num += n / 5;
		n = n / 5;
	}
	cout << num << endl;
	system("pause");
	return 0;
}