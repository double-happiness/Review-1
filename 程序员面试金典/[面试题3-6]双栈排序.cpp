//16��˫ջ����
//��дһ�����򣬰������ջ��������(�����Ԫ��λ��ջ��)��Ҫ�����ֻ��ʹ��һ������
//��ջ�����ʱ���ݣ������ý����ݸ��Ƶ�������ݽṹ����ȥ
//����һ��int[]nubers(C++ ��Ϊvector<int>),���е�һ��Ԫ��Ϊջ�����뷵����
//����ջ����ע������һ��ջ����ζ�����������ֻ�ܷ��ʵ���һ��Ԫ��
//����������[1,2,3,4,5]  [5,4,3,2,1]
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