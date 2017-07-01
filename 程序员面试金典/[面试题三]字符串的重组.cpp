//3、给定两个字符串，编程，确定其中一个字符串的字符重新排列后，能否变成另一个字符串
//这里规定大小写为不同的字符，且考虑字符串重点空格
//给定一个字符串string stringA和一个string stringB请返回一个bool值，代表两个字符串重
//新排列后可相同，保证两串的长度都小于5000

//分析：先判断两个字符串的长度是否一样长，若不一样，则肯定为false
//否则利用冒泡排序的思想依次对比字符串，对于相等的字符串中的字符直接替换掉即可
//最后判断两个字符串是不是为NULL且相等，若是则返回true，否则返回false即可
//方法一：O(N^2)的算法复杂度
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

//方法二:
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