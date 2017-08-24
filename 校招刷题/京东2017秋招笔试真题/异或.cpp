//4.异或
现在输入两个n位二进制数，输出它们异或结果的十进制答案。上述样例中异或的二进制结果为1000，转化成十进制就是8。 
输入： 
输入有三行，第一行一个数n(1<=n<=20)，接下来两行有两个n位二进制数。输入的二进制数可能有前导零。 
输出 
输出一个数，异或结果的十进制数值，不要输出前导零。 
样例输入 
4 
1100 
0100
样例输入 
输入有三行，第一行n(1<=n<=20)，接下来两行有两个n位二进制数。输入的二进制数可有前导零。
4
1100
0100
输出
样例输出
异或结果的十进制数值，不要输出前导零。
8

#include<iostream>
#include<string>
using namespace std;

string s;
int n;

int solve(int n)
{
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		ans *= 2;
		ans += s[i] - '0';
	}
	return ans;
}
int main()
{
	scanf("%d", &n);
	cin >> s;
	int a = solve(n);
	cin >> s;
	int b = solve(n);
	printf("%d", a^b);
	system("pause");
	return 0;
}