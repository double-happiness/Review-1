//元素入栈出栈的合法性
#include<vector>
#include<stack>
#include<iostream>
using namespace std;
template<typename T>
bool CheckStack(vector<T>& in, vector<T>& out)
{
	if (in.size() != out.size())
		return false;
	int i = 0, j = 0;
	stack<int> s;
	while (j != out.size())
	{
		if (s.empty() || s.top() != out[j])
		{
			if (i == in.size())
			{
				return false;
			}
			s.push(in[i++]);
		}
		else
		{
			s.pop();
			j++;
		}
	}
	return true;
}

int main()
{
	vector<int> in;
	in.push_back(1);
	in.push_back(2);
	in.push_back(3);
	in.push_back(4);
	in.push_back(5);

	vector<int> out;
	out.push_back(4);
	out.push_back(5);
	out.push_back(3);
	out.push_back(2);
	out.push_back(1);

	vector<int> out1;
	out1.push_back(4);
	out1.push_back(5);
	out1.push_back(3);
	out1.push_back(1);
	out1.push_back(2);

	bool ret = CheckStack(in, out);
	cout << ret << endl;

	bool ret1 = CheckStack(in, out1);
	cout << ret1 << endl;

	system("pause");
	return 0;
}
