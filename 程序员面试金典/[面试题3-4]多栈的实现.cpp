//14��ʵջ��һ�����ݽṹSetOfStacks���ɶ��ջ��ɣ�����ÿ��ջ�Ĵ�СΪsize����ǰһ��
//ջ����ʱ���½�һ��ջ�������ݽṹ֧������ͨջ��ͬ��push��pop����
//���ԣ�����һ����������int[][2]ope(c++Ϊvector&ltvector&ltint>>),ÿ�������ĵ�һ����Ϊ����
//���ͣ���Ϊ1����Ϊpush��������һ����ӦΪpush�����֣���Ϊ2����Ϊpop��������һ����������
//�巵��һ��int[][](C++Ϊvector&ltvector&ltint>>),Ϊ������в�����SetOfStacks��˳��Ϊ����
//���ϣ�Ĭ�ϳ�ʼ��SetOfStacksΪ�գ���֤���ݵĺϷ���
#include<vector>
#include<stack>

vector<vector<int> > setOfStacks(vector<vector<int> > ope, int size) {
	vector<vector<int> > stack;
	vector<int> temp;
	for (int i = 0; i<ope.size(); i++){
		if (ope[i][0] == 1){
			if (temp.size() == size){
				stack.push_back(temp);
				temp.clear();
				temp.push_back(ope[i][1]);
			}
			else
				temp.push_back(ope[i][1]);
		}
		if (ope[i][0] == 2){
			if (temp.size()>0){
				temp.pop_back();
			}
			else{
				temp = stack[stack.size() - 1];
				temp.pop_back();
				stack.pop_back();
			}

		}
	}
	if (temp.size() != 0)
		stack.push_back(temp);
	return stack;
}