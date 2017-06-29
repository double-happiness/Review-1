template<class T>
int PartSort(T* arr, int left, int right)
{
	int key = arr[right];
	while (left < right)
	{
		while (left < right && arr[left] <= key)
		{
			++left;
		}
		swap(arr[right], arr[left]);
		//arr[right] = arr[left];  
		while (left < right && arr[right] >= key)
		{
			--right;
		}
		if (arr[left] != arr[right])
		{
			swap(arr[left], arr[right]);
		}
	}
	arr[left] = key;
	return left;
}

void QuickSort(int* arr, int left, int right)
{
	assert(arr);
	if (left < right)
	{
		int div = PartSort(arr, left, right);
		QuickSort(arr, left, div - 1);
		QuickSort(arr, div + 1, right);
	}
}

int main()
{
	int arr[] = { 1, 3, 7, 8, 5, 6, 9, 4, 2 };
	QuickSort(arr, 0, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < sizeof(arr) / arr[0]; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}