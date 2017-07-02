//5、利用字符重复出现的次数，编程实现基本的字符串压缩功能。
//比如“aabcccccaaa”经压缩会变成a2b1c5a3，若压缩后字符串没有变短，则返回原来的字符串。

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
		//to_string()函数返回bitset的字符串形式。
		//bitset除了可以访问指定下标的bit位以外，还可以把它们作为一个整数来进行某些统计
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