//7�����дһ���㷨����N�׷�����ĳ��Ԫ��Ϊ0���������ڵ����������㡣
//����һ��N�׷���int[][](C++��Ϊvector<vector><int >> )mat�;���Ľ���n��
//�뷵����ɲ������int[][]����(C++��Ϊvector<vector><int >> )����֤nС�ڵ���300��
//�����е�Ԫ��Ϊint��Χ�ڡ�< / int>< / vector>< / int>< / vector>
//����������
//[[1, 2, 3], [0, 1, 2], [0, 0, 1]]
//���أ�[[0, 0, 3], [0, 0, 0], [0, 0, 0]]

template<typename T>
vector<vector<int> > clearZero(vector<vector<int> > mat, int n) {
	// write code here
	vector<bool> row(n, false);
	vector<bool> column(n, false);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (mat[i][j] == 0){
				row[i] = true;
				column[j] = true;
			}
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (row[i] || column[j]){
				mat[i][j] = 0;
			}
		}
	}
	return mat;
}