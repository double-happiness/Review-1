//����һ������������λ��1�ĸ�����Ҫ��Ч�ʾ����ܵĸߡ�
//������ȷ�������͸����Ķ�������1�ĸ�����

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