��1+2+3+...+n��Ҫ����ʹ�ó˳�����for��while��if��else��switch��case�ȹؼ��ּ������ж���䣨A?B:C����

�ݹ�˼�봦��
ѭ��˼�봦��

//����ģ��������⣬ֻ������n�Ƚ�С�����
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