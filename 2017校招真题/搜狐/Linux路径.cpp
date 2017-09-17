//linux路径

样例 

"/home/", => "/home"
 
"/a/./b/../../c/", => "/c"
 
挑战 

你是否考虑了 路径 = "/../" 的情况？
 
在这种情况下，你需返回"/"。
 

此外，路径中也可能包含双斜杠'/'，如 "/home//foo/"。
 
在这种情况下，可忽略多余的斜杠，返回 "/home/foo"。



#include<iostream>
using namespace std;
#include<string>
#include<stack>

string simplifyPath(string& path) 
{
	stack<string> st;
	string cur = "";
	path += "/";
	for (int i = 0; i<path.length(); i++)
	{
		if (path[i] == '/')
		{
			if (cur == "..")
			{
				if (!st.empty())
					st.pop();
			}
			else if (cur == ".")
			{}
			else if (cur.length()>0)
			{
				st.push(cur);
			}
			cur = "";
		}
		else
			cur += path[i];
	}
	string ret = "";
	while (!st.empty())
	{
		ret = "/" + st.top() + ret;
		st.pop();
	}
	if (ret.length() == 0)
		ret = "/";
	return ret;
}

int main()
{
	string str;
	cin >> str;
	cout << simplifyPath(str);
	return 0;
}