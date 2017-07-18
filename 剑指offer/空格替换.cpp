//替换字符串中的空格为$$$
void ReplaceBlack(char* str,size_t n)
{
	if (str == NULL)
		return;
	int count = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (*str == ' ')
			++count;
		++str;
	}
	int newLen = count * 2 + n;
	while (n >= 0 && newLen > n)
	{
		if (str[n - 1] == ' ')
		{
			str[newLen--] = '$';
			str[newLen--] = '$';
			str[newLen--] = '$';
		}
		else
		{
			str[newLen--] = str[n--];
		}
	}
}
