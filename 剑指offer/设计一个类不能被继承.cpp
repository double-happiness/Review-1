//���һ���಻�ܱ��̳�
class A
{
public:
	static A GetA()
	{
		A a;
		return a;
	}

	static void deleteA(A* a)
	{
		delete a;
		a = NULL;
	}
private:
	A()
	{
		cout << "A" << endl;
	}

	~A()
	{
		cout << "~A" << endl;
	}
};
