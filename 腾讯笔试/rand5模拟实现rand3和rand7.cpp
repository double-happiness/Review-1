#include<iostream>
using namespace std;
#include<stdlib.h>

int rand5()
{
	return rand() % 5+1;
}

int rand7()
{
     int i = 0;
     do{
         i = 5 * (rand5() - 1) + rand5();    //产生[1,25]的整数区间
	} while (i > 21);                            //将[1,25]整数区间控制于[1,21]
     return i % 7 + 1;                            //将[1,21]映射到[1,7]
}

int rand3()
{
	int i = 0;
	do
	{
		i = 2 * rand5();
	} while (i > 9);
	return i % 3 + 1;
}

int main()
{
	for (int i = 0; i < 20; i++)
	{
		cout << rand3() << "   ";
		if ((i + 1) % 5 == 0)
			cout << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}