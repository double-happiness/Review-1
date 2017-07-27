#include <string.h>
#include <stdlib.h>

int main()
{
	int i = 0, j = 0;
	int begin = 0, end = 0;
	char tmp;
	char str[100] = { 0 };
	gets(str);
	//第一步：全部翻转 ? 
	j = strlen(str) - 1;
	while (j > i)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		j--;
		i++;
	}

	//第二步：将每个空格隔开的单词翻转 ? 
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			begin = i;
			while (str[i] && str[i] != ' ')
			{
				i++;
			}
			i = i - 1; 
			end = i;
		}
		while (end > begin)
		{
			tmp = str[begin];
			str[begin] = str[end];
			str[end] = tmp;
			end--;
			begin++;
		}
		i++;
	}
	printf("%s\n", str);
	system("pause");
	return 0;
}

