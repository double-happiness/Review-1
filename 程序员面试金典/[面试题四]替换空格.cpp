//4、编写一个方法，将字符串中的空格全部替换为%20
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