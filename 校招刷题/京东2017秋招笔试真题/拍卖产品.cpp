//5.拍卖产品
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn = 100;	//假定数组中最多存放的元素的个数
int a[maxn];
int main()
{
	int n, m, ans = 0, pos;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= m; i++)
		scanf("%d", &a[i]);
	sort(a + 1, a + 1 + m);
	for(int i = 1; i <= m; i++)
	{
		if (ans < a[i] * min(n, m - i + 1))
		{
			ans = a[i] * min(n, m - i + 1);
			pos = a[i];
		}
	}
	cout << pos << endl;
	system("pause");
	return 0;
}