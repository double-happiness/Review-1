//不使用+、-、*、/实现一个ADD函数
int ADD(int num1, int num2)
{
	while (num2 != 0)
	{
		int num = num1^num2;
		num2 = (num1&num2) << 1;
		num1 = num;
	}
	return num1;
}