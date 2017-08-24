//2.集合
给你两个集合，要求 {A} + {B}。注：同一个集合中不会有两个相同的元素。								
输入 
多组（不超过 5 组）数据。
每组输入数据分为三行，第一行有两个数字 n,m($0＜n,m\leq10000$)，分别表示集合 A 和集合 B 的元素个数。后两行分别表示集合 A 和集合 B。每个元素为不超出 int 范围的整数，每个元素之间有一个空格隔开。
 
样例输入 
1 2
1
2 3
1 2
1
1 2
输出 
针对每组数据输出一行数据，表示合并后的集合，要求从小到大输出，每个元素之间有一个空格隔开。
样例输出 
1 2 3
1 2
时间限制C/C++语言：1000MS其它语言：3000MS 

#include<iostream>
#include<set>
using namespace std;

set<int> S;
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		S.insert(x);
	}
	for (int i = 0; i < m; i++)
	{
		int x;
		cin >> x;
		S.insert(x);
	}
	for (auto &x:S)
	{
		if (x != *S.rbegin())
			cout << x << " ";
		else
			cout << x;
	}
	system("pause");
	return 0;
}