//设计一个类只能在栈上创建对象
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