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
         i = 5 * (rand5() - 1) + rand5();    //����[1,25]����������
	} while (i > 21);                            //��[1,25]�������������[1,21]
     return i % 7 + 1;                            //��[1,21]ӳ�䵽[1,7]
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