//1、请实现一个算法，确定一个字符串的所有字符是否全都不同
//给定一个string iniString，请返回一个bool值, True代表所有
//字符全都不同，False代表存在相同的字符。保证字符串中的字符
//为ASCII字符。字符串的长度小于等于3000。
//方法一：O(N^2)
bool IsDiffer(string iniString)
{
	if (iniString.size() > 256)
		return false;
	for (int i = 0; i < iniString.size(); i++)
	{
		for (int j = i + 1; j < iniString.size(); j++)
		{
			if (iniString[i] == iniString[j])
				return false;
		}
	}
	return true;
}