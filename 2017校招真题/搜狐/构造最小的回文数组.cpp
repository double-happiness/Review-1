//��֪һ��ȫ����������ɵ����飬������Ҫ���һЩԪ�أ�ʹ�ø������Ϊһ���������飬�Ҹû�������ĵĺ�Ҫ��С
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int L;
	cin >> L;
	vector<int> v;
	for (int i = 0; i < L; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	int sum = 0;
	int begin = 0;
	int end = L - 1;
	while (begin < end)
	{
		if (v[begin] == v[end])
		{
			begin++;
			end--;
		}
		else if (v[begin] < v[end])
			v.insert(v.begin() + end + 1, v[begin++]);
		else
			v.insert(v.begin() +begin, v[end--]);
	}
	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
		sum += v[i];
	}
	cout <<endl<< sum;
	system("pause");
	return 0;
}