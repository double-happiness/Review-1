��С��
С������������һ����¥����С������վ��¥���Ĳ�ͬ�㣬����С��վ��¥��������N�ף�����������������£�ÿ����غ������ϴ�����߶ȵ�һ�룬���Դ�����֪��ȫ���䵽���治������4��С��һ�������˶����ף�(���ֶ�Ϊ����)
�����ĸ�����A,B,C,D���뷵����������
����������
100,90,80,70
���أ�1020

    double Heigh(double n){
        double ret=n;
        while(n>0){
            ret+=2*n/2;
            n/=2;
        }
        return ceil(ret);
    }
    int calcDistance(int A, int B, int C, int D) {
        // write code here
        return (Heigh(A)+Heigh(B)+Heigh(C)+Heigh(D));
    }