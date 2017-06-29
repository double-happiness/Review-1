//strcpy&&strncpy´úÂëÊµÏÖ
char* Strcpy(char* dst, const char* src)
{
	assert(dst && src);
	char* tmp = dst;
	while (*dst++ = *src++)
		;
	return tmp;
}

char* Strncpy(char* dst, const char* src, size_t n)
{
	char* ret = dst;
	while (n && (*dst++ = *src++))
	{
		n--;
	}
	if (n)
	{
		while (--n)
			*dst++ = '\0';
	}
	return ret;
}

int main()
{
	char* str = "asdfghhjg";
	char str1[10];
	Strcpy(str1, str);
	cout << str1 << endl;
	char str2[10];
	size_t n = 5;
	Strncpy(str2, str, n);
	cout << str2 << endl;
	system("pause");
	return 0;
}