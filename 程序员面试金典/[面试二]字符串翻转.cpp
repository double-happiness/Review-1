//2����ʵ��һ���㷨���ڲ�ʹ�ö������ݽṹ�ʹ���ռ������£�
//��תһ���������ַ���(����ʹ�õ������̱���)��
//����һ��string iniString���뷵��һ��string��Ϊ��ת����ַ�����
//��֤�ַ����ĳ���С�ڵ���5000��

string reverseString(string iniString) {
	if (iniString.size() <= 1)
		return iniString;
	int left = 0;
	int right = iniString.size() - 1;
	while (left < right)
	{
		int tmp = iniString[left];
		iniString[left] = iniString[right];
		iniString[right] = tmp;
		left++;
		right--;
	}
	return iniString;
}

int main()
{
	string str = "asdfgh fgfh ast";
	
	cout << reverseString(str).c_str() << endl;
	system("pause");
	return 0;
}