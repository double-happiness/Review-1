//3.通过考试
小明同学要参加一场考试，考试一共有n道题目，小明必须做对至少60%的题目才能通过考试。考试结束后，小明估算出每题做对的概率，p1,p2,…,pn。你能帮他算出他通过考试的概率吗？

输入
输入第一行一个数n（1<=n<=100），表示题目的个数。第二行n个整数，p1,p2,…,pn。表示小明有pi%的概率做对第i题。（0<=pi<=100）
样例输入
4
50 50 50 50
输出
小明通过考试的概率，最后结果四舍五入，保留小数点后五位。
样例输出
0.31250
时间限制
C/C++语言：1000MS其它语言：3000MS
内存限制
C/C++语言：65536KB其它语言：589824KB
#include<iostream>

using namespace std;
const int maxn = 100;
int n, a[maxn];
double dp[maxn][maxn];

int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	dp[0][0] = 1;
	for (int i = 1; i <= n; i++)
	{
		dp[i][0] = dp[i - 1][0] * (100.0 - a[i]) / 100;
		for (int j = 1; j <= i; j++)
		{
			dp[i][j] = dp[i - 1][j] * (100.0 - a[i]) / 100 \
					   + dp[i - 1][j - 1] * 1.0 * a[i] / 100;
		}
	}
	int begin = (3 * n + 4) / 5;
	double ans = 0;
	for (int i = begin; i <= n; i++)
	{
		ans += dp[n][i];
	}
	printf("%.5f\n", ans);
	system("pause");
	return 0;
}