#include <assert.h>
int OverHalfNum(int* array, size_t n)
{
	assert(array);
	int count = 0;
	int num = array[0];
	for (size_t i = 1; i < n; ++i)
	{
		if (array[i] == array[i - 1])
		{
			count++;
		}
		else
		{
			if (count != 0)
			{
				count--;
			}
			num = array[i];
		}
	}
	return num;
}

int main()
{
	int array[] = { 2, 3, 4, 5, 6, 2, 2, 2, 2, 2, 1, 5, 2, 2 };
	cout << OverHalfNum(array, sizeof(array) / sizeof(array[0]));
	system("pause");
	return 0;
}