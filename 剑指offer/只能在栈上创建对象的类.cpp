//���һ����ֻ����ջ�ϴ�������
class HeapType
{
public:
	static HeapType* CreateObject()
	{
		return new HeapType;
	}
private:
	HeapType()
	{}
	int _p;
};