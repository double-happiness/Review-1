//strlen��ͨ�汾�͵ݹ�汾
//��ͨ��
int Strlen(const char* str)
{
	assert(str);
	int count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}
//�ݹ�汾
int MyStrlen(const char* str)
{
	assert(str);
	if (*str == 0)
		return 0;
	return 1 + MyStrlen(str+1);
}

int main()
{
	const char* str = "asdfgh";
	int ret = Strlen(str);
	cout << ret << endl;
	int ret1 = MyStrlen(str);
	cout << ret1 << endl;
	system("pause");
	return 0;
}