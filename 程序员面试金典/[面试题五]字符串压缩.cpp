//5�������ַ��ظ����ֵĴ��������ʵ�ֻ������ַ���ѹ�����ܡ�
//���硰aabcccccaaa����ѹ������a2b1c5a3����ѹ�����ַ���û�б�̣��򷵻�ԭ�����ַ�����

string zipString(string iniString)
{
	string newString;
	int len = iniString.size();
	int start = 0, end = 0;
	int count = 0;
	char arr[4] = { 0 };
	while (end < len)
	{
		while (iniString[start] == iniString[end])
			end++;
		newString += iniString[start];
		count = end - start;
		newString += to_string(end - start);
		//to_string()��������bitset���ַ�����ʽ��
		//bitset���˿��Է���ָ���±��bitλ���⣬�����԰�������Ϊһ������������ĳЩͳ��
		start = end;

	}
	if (iniString.size() <= newString.size())
		return iniString;
	else
		return newString;
}

int main()
{
	string str("aabbbcccccd");
	string ret = zipString(str);
	cout << ret.c_str() << endl;
	system("pause");
	return 0;
}