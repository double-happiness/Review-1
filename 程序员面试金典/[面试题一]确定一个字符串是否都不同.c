//1����ʵ��һ���㷨��ȷ��һ���ַ����������ַ��Ƿ�ȫ����ͬ
//����һ��string iniString���뷵��һ��boolֵ, True��������
//�ַ�ȫ����ͬ��False���������ͬ���ַ�����֤�ַ����е��ַ�
//ΪASCII�ַ����ַ����ĳ���С�ڵ���3000��
//����һ��O(N^2)
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