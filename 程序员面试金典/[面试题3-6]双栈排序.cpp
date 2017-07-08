//16、双栈排序
//编写一个程序，按升序对栈进行排序(即最大元素位于栈顶)，要求最多只能使用一个额外
//的栈存放临时数据，但不得将数据复制到别的数据结构中区去
//给定一个int[]nubers(C++ 中为vector<int>),其中第一个元素为栈顶，请返回排
//序后的栈。请注意这是一个栈，意味排序过程中你只能访问到第一个元素
//测试用例：[1,2,3,4,5]  [5,4,3,2,1]
#include<vector>
#include<stack>
vector<int> twoStacksSort(vector<int> numbers) {
	// write code here
	vector<int> temp;
	int size = numbers.size();
	if (size <= 1)
		return numbers;
	temp.push_back(numbers[0]);
	for (int i = 1; i<size; ++i)
	{
		if (numbers[i] <= temp.back())
			temp.push_back(numbers[i]);
		else
		{
			vector<int>::iterator it;
			for (it = temp.begin(); it != temp.end(); ++it)
			{
				if (*it<numbers[i])
					break;
			}
			temp.insert(it, numbers[i]);
		}
	}
	return temp;
}