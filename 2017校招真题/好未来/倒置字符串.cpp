//�����ַ���
��Ŀ����
��һ�仰�ĵ��ʽ��е��ã���㲻���á����� I like beijing. �����������Ϊ��beijing. like I
��������:
ÿ�������������1������������  I like  beijing. �����������Ȳ�����100
�������:
�����������֮����ַ���,�Կո�ָ�
ʾ��1
����

I like  beijing.
���

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