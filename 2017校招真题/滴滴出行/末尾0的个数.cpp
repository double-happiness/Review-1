//ĩβ0�ĸ���
//����һ��������n,��n!(���׳�)ĩβ�ж��ٸ�0�� ����: n = 10; n! = 3628800,���Դ�Ϊ2
��������:
����Ϊһ�У�n(1 �� n �� 1000)
�������:
���һ������,����Ŀ����

#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
        while(n){
            count+=n/5;
            n/=5;
        }
    cout<<count<<endl;
    return 0;
}