//��������
//һ�������� N ��Ԫ�أ�����������������͡� ���磺[-1,2,1]������������������Ϊ[2,1]�����Ϊ 3
��������:
����Ϊ���С�
��һ��һ������n(1 <= n <= 100000)����ʾһ����n��Ԫ��
�ڶ���Ϊn��������ÿ��Ԫ��,ÿ����������32λint��Χ�ڡ��Կո�ָ���
�������:
���������������к�����ֵ��

#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        int num=0;
        cin>>num;
        arr[i]=num;
    }
    int maxNum=-999;
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum<=0)
            sum=arr[i];
        else
            sum+=arr[i];
        maxNum=max(sum,maxNum);
    }
    cout<<maxNum<<endl;
    return 0;
}