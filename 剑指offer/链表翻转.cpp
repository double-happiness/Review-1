//����ת������һ�������һ����k����������1��2��3��4��5��6��k = 2��
//��ת��2��1��4��3��6��5����k = 3, ��ת��3��2��1��6��5��4����k = 4��
//��ת��4��3��2��1��5��6���ó���ʵ��Node* RotateList(Node* list, size_t k).
//��ʾ����������������õ���������
#include<iostream>
#include<vector>
using namespace std;

typedef struct Node
{
	int val;
	struct Node* next;
}Node;

Node* ReverseList(Node* pHead)
{
	if (NULL == pHead || pHead->next == NULL)
		return NULL;
	Node *cur;
	Node *pNew = NULL;
	while (pHead)
	{
		cur = pHead;
		pHead = pHead->next;
		cur->next = pNew;
		pNew = cur;
	}
	return pNew;
}

Node* getLastNode(Node* pHead)
{
	while (NULL != pHead->next)
	{
		pHead = pHead->next;
	}
	return pHead;
}

Node* swapListByk(Node* pHead, int k)
{
	if (k <= 1)
	{
		return pHead;
	}
	int pos;
	Node* pNode = pHead;
	Node* newHead;
	Node* pNextNode;
	Node* pLastNode = NULL;
	pHead = NULL;
	while (pNode)
	{
		pos = 0;
		newHead = pNode;
		while (pNode && pos < k - 1)
		{
			pNode = pNode->next;
			pos++;
		}
		if (pNode)
		{
			pNextNode = pNode->next;
			pNode->next = NULL;
			if (NULL != pLastNode)
			{
				pLastNode->next = NULL;
			}
			pNextNode = ReverseList(newHead);
			if (NULL == pHead)
			{
				pHead = newHead;
			}
			else
			{
				pLastNode->next = newHead;
			}
			pNode = getLastNode(newHead);
			pNode->next = pNextNode;
			pLastNode = pNode;
			pNode = pNextNode;
		}
		else
		{
			break;
		}
	}
	return pHead;
}

void PrintList(Node* pHead)
{
	Node* pNode = pHead;
	while (pNode)
	{
		cout << pNode->val << " ";
		pNode = pNode->next;
	}
	cout << endl;
}

Node* CreateList(int* arr, int len)
{
	Node* pHead = NULL;
	Node* pTemp=pHead;
	Node* pNode=NULL;
	for (int i = 0; i < len; i++)
	{
		pNode = (Node*)malloc(sizeof(Node));
		pNode->val = arr[i];
		pNode->next = NULL;
		if (NULL == pHead)
		{
			pHead = pNode;
		}
		else
		{
			pTemp->next = pNode;
		}
		pTemp = pNode;
	}
	return pHead;
}

void DestroyList(Node* pHead)
{
	Node* pNode;
	while (pHead) {
		pNode = pHead;
		pHead = pHead->next;
		free(pNode);
	}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int length = sizeof(arr) / sizeof(arr[0]);
	Node* pHead = CreateList(arr, length);
	pHead = swapListByk(pHead, 2);
	PrintList(pHead);
	DestroyList(pHead);
	cin.get();

	system("pause");
	return 0;
}