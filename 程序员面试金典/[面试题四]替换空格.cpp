//4����дһ�����������ַ����еĿո�ȫ���滻Ϊ%20
string ReplaseSpace(string iniString, int length)
{
	string newStr;
	for (int i = 0; i < length; i++)
	{
		if (iniString[i] == ' ')
		{
			newStr = newStr + "20%";
			continue;
		}
		newStr += iniString[i];
	}
	return newStr;
}

int main()
{
	string str = "we are family!";
	string tmp = ReplaseSpace(str, str.size());
	cout << tmp.c_str() << endl;
	system("pause");
	return 0;
}