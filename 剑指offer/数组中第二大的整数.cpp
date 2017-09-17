#include<iostream>
using namespace std;
#include<vector>

const int MinNumber = 0xFFFFFFFF;

int GetSecondNumber(vector<int> v, int n)
{
	int max = v[0];
	int second_max = MinNumber;
	for (int i = 1; i<n; i++)
	{
		if (v[i] > max){
			second_max = max;
			max = v[i];
		}
		else{
			if (v[i] > second_max){
				second_max = v[i];
			}
		}
	}
	return second_max;
}

int main()
{
	int n = 0;
	cin >> n;
	vector<int> v;
	for (int i = 0; i<n; i++)
	{
		int tmp = 0;
		cin >> tmp;
		v.push_back(tmp);
	}
	cout << GetSecondNumber(v, v.size()) << endl;
	return 0;
}