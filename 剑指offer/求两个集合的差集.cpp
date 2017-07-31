//已知集合A和B的元素分别用不含头结点的单链表存储，函数difference()
//用于求解集合A与B的差集，并将结果保存在集合A的单链表中。例如，
//若集合A = { 5, 10, 20, 15, 25, 30,35 }，集合B = { 5, 15, 35, 25 }，
//完成计算后A = { 10, 20, 30 }。
//链表结点的结构类型定义如下：

//请完成函数void difference(node** LA, node* LB)；
struct node
{
	int elem;
	node* next;
};
void difference(node** LA, node* LB)
{
	if (LA == NULL && LB == NULL)
		return;
	node* pa = *LA;
	node* pb = LB;
	node* pre = NULL;
	node* del = NULL;
	while (pa)
	{
		pb = LB;	//pb每次都指向LB开始位置
		while (pb && pa->elem != pb->elem)
			pb = pb->next;
		if (pb)	//说明两个值相等了
		{
			if (!pre)	//pre为空时说明是第一次找到
				*LA = pa->next;
			else        //将LA删除节点的前后连接起来
				pre->next = pa->next;
			del = pa;
			pa = pa->next;
			free(del);
		}
		else     //pb到尾了没有找到相等的节点
		{
			pre = pa;
			pa = pa->next;
		}
	}
}