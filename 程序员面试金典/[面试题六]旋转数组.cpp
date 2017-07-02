////6、旋转矩阵
//例如给定{ { 1，2，3 }，{ 4，5，6 }，{ 7，8，9 } }
//得出{ { 7，4，1 }，{ 8，5，2 }，{ 9，6，3 } };

template<typename T>
vector<vector<int> > transformImage(vector<vector<int> > mat, int n)
{
	vector<vector<int>> arr = mat;
	int tmp = n - 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[j][tmp] = mat[i][j];
		}
		tmp--;
	}
	return arr;
}