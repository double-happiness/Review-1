//计算一个整数二进制位中1的个数。要求效率尽可能的高。
//且能正确求正数和负数的二进制中1的个数。

int CountOneNum(int& num)
{
	int count = 0;
	while (num)
	{
		++count;
		num &= (num - 1);
	}
	return count;
}

int main()
{
	int num = 15;
	cout << CountOneNum(num) << endl;
	system("pause");
	return 0;
}