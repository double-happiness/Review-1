//ʵ��һ���򵥵��ַ����滻������ԭ������Ҫ�滻��%s�����밴�ղ����б��˳��һһ�滻ռλ��
//�������б���ַ�������ռλ����������ʣ��Ĳ����ַ���ӵ��ַ����Ľ�β
//�����ַ���Aͬʱ�������ĳ���n�������ַ�����arg���뷵���滻����ַ�������֤������������ռ
//λ����������֤ԭ���д�СдӢ����ĸ��ɣ�ͬʱ����С�ڵ���500
//��������:"A%sC%sE" ,7,['B','D','F']
//���أ�ABCDEF
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string FormatString(const string& str, int n, const vector<char>& arg, int m)
{
	string s;
	int count = 0;
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (str[i] == '%' && i + 1 < n && str[i + 1] == 's')
		{
			s += arg[j];
			j++;
			i++;
			count++;
		}
		else
		{
			s += str[i];
		}
	}
	if (count < m)
	{
		for (; j < m; j++)
			s += arg[j];
	}
	return s;
}

int main()
{
	string s = "A%sC%sE";
	vector<char> v = { 'B', 'D', 'F' };
	
	cout << FormatString(s, s.size(), v, v.size()) << endl;
	system("pause");
	return 0;
}