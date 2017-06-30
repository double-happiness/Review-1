void ReserveString(char* str, int left, int right)
{
	assert(str);
	while (left < right)
	{
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	char str[] = "asdf rtty hweaw";
	ReserveString(str, 0, strlen(str) - 1);
	cout << str << endl;
	system("pause");
	return 0;
}