//���һ����ֻ���ڶ��ϴ������� 
class StackType
{
public:
	static StackType* CreateObject()
	{
		return new StackType;
	}
private:
	StackType()
	{}
	int _p;
};