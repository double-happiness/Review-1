//����һ���ַ����е�һ��ֻ�������ε��ַ������磺��abcdefabcdefabc��
//�е�һ��ֻ��������Ϊ��d����Ҫ��ʱ�临�Ӷ�ΪO(N)���ռ临�Ӷ�ΪO(1)
#include<assert.h>
char FindFirstCh(char* str, size_t n)
{
	assert(str&& n);
	char arr[256] = { 0 };	//��¼�ַ����ֵĸ���
	int count[256] = { 0 };	//��¼�ַ����ֵĴ���
	for (size_t i = 0; i < n; i++)
	{
		arr[str[i]]++;
		count[str[i]] = i;
	}
	for (size_t i = 0; i < n; i++)
	{
		if (count[i] && arr[i] == 2)	//������ַ��������Σ����ǵ�һ�γ��ֵ�
			return arr[i];
	}
	return NULL;		//û�г��������ַ������
}