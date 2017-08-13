//实现一个简单的字符串替换函数，原串中需要替换“%s”，请按照参数列表的顺序一一替换占位符
//若参数列表的字符数大于占位符个数，将剩余的参数字符添加到字符串的结尾
//给定字符串A同时给定它的长度n及参数字符数组arg，请返回替换后的字符串，保证参数个数大于占
//位符个数，保证原串有大小写英文字母组成，同时长度小于等于500
//测试用例:"A%sC%sE" ,7,['B','D','F']
//返回：ABCDEF
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