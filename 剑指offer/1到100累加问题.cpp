求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。

递归思想处理
循环思想处理

//利用模板类型求解，只适用于n比较小的情况
template<unsigned int n> 
struct Sum_Solution
{
	enum Value{ N = Sum_Solution<n - 1>::N + n };
};

template<>
struct Sum_Solution<1>
{
	enum Value{ N = 1 };
};

unsigned int temp::n = 0;
class temp
{
public:
	temp()
	{
		++n;
		sum += n;
	}

	static void init()
	{
		sum = 0;
		n = 0;
	}

	static unsigned int GetSum()
	{
		return sum;
	}
private:
	static unsigned int sum;
	static unsigned int n;
};
signed int temp::sum = 0;

unsigned int Sum(unsigned int n)
{
	temp::init();
	temp* p = new temp[100];
	delete[] p;
	return temp::GetSum();
}

typedef unsigned int(*fun)(unsigned int n);

unsigned int SolutionTemp(unsigned int n)
{
	return 0;
}

unsigned int solution(unsigned int n)
{
	static fun f[2] = {SolutionTemp, solution};
	return n + f[!!n](n - 1);
}

size_t Sum_Solution(size_t)

int main()
{
	cout << solution(100) << endl;
	system("pause");
	return 0;
}