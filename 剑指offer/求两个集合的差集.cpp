//��֪����A��B��Ԫ�طֱ��ò���ͷ���ĵ�����洢������difference()
//������⼯��A��B�Ĳ��������������ڼ���A�ĵ������С����磬
//������A = { 5, 10, 20, 15, 25, 30,35 }������B = { 5, 15, 35, 25 }��
//��ɼ����A = { 10, 20, 30 }��
//������Ľṹ���Ͷ������£�

//����ɺ���void difference(node** LA, node* LB)��
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
		pb = LB;	//pbÿ�ζ�ָ��LB��ʼλ��
		while (pb && pa->elem != pb->elem)
			pb = pb->next;
		if (pb)	//˵������ֵ�����
		{
			if (!pre)	//preΪ��ʱ˵���ǵ�һ���ҵ�
				*LA = pa->next;
			else        //��LAɾ���ڵ��ǰ����������
				pre->next = pa->next;
			del = pa;
			pa = pa->next;
			free(del);
		}
		else     //pb��β��û���ҵ���ȵĽڵ�
		{
			pre = pa;
			pa = pa->next;
		}
	}
}