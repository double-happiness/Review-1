//3�����������ַ�������̣�ȷ������һ���ַ������ַ��������к��ܷ�����һ���ַ���
//����涨��СдΪ��ͬ���ַ����ҿ����ַ����ص�ո�
//����һ���ַ���string stringA��һ��string stringB�뷵��һ��boolֵ�����������ַ�����
//�����к����ͬ����֤�����ĳ��ȶ�С��5000

//���������ж������ַ����ĳ����Ƿ�һ����������һ������϶�Ϊfalse
//��������ð�������˼�����ζԱ��ַ�����������ȵ��ַ����е��ַ�ֱ���滻������
//����ж������ַ����ǲ���ΪNULL����ȣ������򷵻�true�����򷵻�false����
//����һ��O(N^2)���㷨���Ӷ�
bool checkSam(string stringA, string stringB)
{
	if (stringA.size() != stringB.size())
		return false;
	for (int i = 0; i < strlen(stringA.c_str()); i++)
	{
		for (int j = 0; j < strlen(stringB.c_str()); j++)
		{
			if (stringA[i] == stringB[j])
			{
				stringA.erase(stringA.begin() + i);
				stringB.erase(stringB.begin() + j);
				i--;
				break;
			}
		}
	}
	if (stringA.size() == 0 && stringB.size() == 0)
	{
		return true;
	}
	else
		return false;
}

//������:
bool checkSam(string stringA, string stringB) {
	// write code here
	if (stringA.empty() || stringB.empty()) 
		return false;
	int hashtableA[256] = { 0 };
	int hashtableB[256] = { 0 };
	for (int i = 0; i<stringA.size(); i++)
		hashtableA[stringA[i]]++;
	for (int i = 0; i<stringB.size(); i++)
		hashtableB[stringB[i]]++;
	for (int i = 0; i<256; i++)
	if (hashtableA[i] != hashtableB[i])
		return false;
	return true;
}

int main()
{
	string str1 = "asdfg";
	string str2 = "asdfg";
	bool ret = checkSam(str1, str2);
	cout << ret << endl;
	system("pause");
	return 0;
}