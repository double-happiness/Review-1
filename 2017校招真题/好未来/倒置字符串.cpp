//倒置字符串
题目描述
将一句话的单词进行倒置，标点不倒置。比如 I like beijing. 经过函数后变为：beijing. like I
输入描述:
每个测试输入包含1个测试用例：  I like  beijing. 输入用例长度不超过100
输出描述:
依次输出倒置之后的字符串,以空格分割
示例1
输入

I like  beijing.
输出

beijing. like I

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	string s1;
	getline(cin, s1);
	vector<string> v;
	string ret = "";
	for (size_t i = 0; i<s1.size(); i++){
		if (s1[i] == ' '){
			v.push_back(ret);
			ret = "";
		}
		else
			ret =ret + s1[i];
	}
	if (ret.size() != 0)
	{
		v.push_back(ret);
	}
	cout << v[v.size() - 1];
	for (int i = v.size() - 2; i >= 0; i--){
		cout << " " << v[i];
	}
	system("pause");
	return 0;
}