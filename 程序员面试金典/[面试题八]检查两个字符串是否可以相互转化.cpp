//8��Ŀ����
//�ٶ����Ƕ�֪���ǳ���Ч���㷨�����һ�������Ƿ�Ϊ�����ַ������Ӵ���
//�뽫����㷨��д��һ�����������������ַ���s1��s2�����д������s2
//�Ƿ�Ϊs1��ת���ɣ�Ҫ��ֻ�ܵ���һ�μ���Ӵ��ĺ�����
//���������ַ���s1, s2, �뷵��boolֵ����s2�Ƿ���s1��ת���ɡ��ַ������ַ�
//ΪӢ����ĸ�Ϳո����ִ�Сд���ַ�������С�ڵ���1000��
//����������
//"Hello world", "worldhello "
//���أ�false
//"waterbottle", "erbottlewat"
//���أ�true

bool checkReverseEqual(string s1, string s2) {
	if (s1.size() != s2.size())
		return false;
	s1 += s1;
	if (s1.find(s2) != string::npos)
	//����str���ַ����е�һ�γ��ֵ�λ�ã���index��ʼ���ң�
	//���û�ҵ��򷵻�string::npos,
		return true;
	return false;
}