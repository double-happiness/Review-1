//查找一个字符串中第一个只出现两次的字符。比如：“abcdefabcdefabc”
//中第一个只出现两次为‘d’，要求时间复杂度为O(N)，空间复杂度为O(1)
#include<assert.h>
char FindFirstCh(char* str, size_t n)
{
	assert(str&& n);
	char arr[256] = { 0 };	//记录字符出现的个数
	int count[256] = { 0 };	//记录字符出现的次数
	for (size_t i = 0; i < n; i++)
	{
		arr[str[i]]++;
		count[str[i]] = i;
	}
	for (size_t i = 0; i < n; i++)
	{
		if (count[i] && arr[i] == 2)	//如果该字符出现两次，且是第一次出现的
			return arr[i];
	}
	return NULL;		//没有出现两个字符的情况
}