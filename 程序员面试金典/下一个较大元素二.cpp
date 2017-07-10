//现在有一个数组，请找出数组中每个元素的后面比它大的最小的元素，若不存在则为-1。
//给定一个int数组A及数组的大小n，请返回每个元素所求的值组成的数组。保证A中元素为正//整数，且n小于等于1000。
//测试样例：
//[11,13,10,5,12,21,3],7
//[12,21,12,12,21,-1,-1]

vector<int> findNext(vector<int> A, int n) 
{
	vector<int> res(n, -1);
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (A[i] < A[j])
			{
				if (res[i] == -1)
					res[i] = A[j];
				else
					res[i] = min(res[i], A[j]);
			}
		}
	}
	return res;
}