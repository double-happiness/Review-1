//设计一个类只能在堆上创建对象。 
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