//独立的小易
#include<iostream>
using namespace std;

int main()
{
//	int x = 3, f = 5, d = 100, p = 10;
	int x = 0, f = 0, d = 0, p = 0;
	cin >> x >> f >> d >> p;
	int leftmoney = d;
	int rentmoney = f * x;
	if (leftmoney > rentmoney)
	{
		leftmoney -= rentmoney;
		cout << leftmoney / (x + p) + f << endl;
	}
	else
	{
		cout << rentmoney / x << endl;
	}	
	system("pause");
	return 0;
}