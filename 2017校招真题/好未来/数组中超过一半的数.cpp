//��������ֳ���һ�����
��Ŀ����
����n��������������ִ������ڵ������鳤��һ�������
��������:
ÿ������������� n���ո�ָ��n��������n������100��������һ���������ִ������ڵ���n/2��
�������:
������ִ������ڵ���n/2������
ʾ��1
����
3 9 3 2 5 6 7 3 2 3 3 3
���
3

#include<iostream>

using namespace std;
const int n=100;

int main(){
    int a[n]={0};
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        a[i]=num;
    }
    int count=1;
    int key=a[0];
    for(int i=1;i<n;++i){
        if(key==a[i])
            ++count;
        else if(count==0)
            key=a[i];
        else
            --count;
    }
    if(count>0)
        cout<<key;
    else
        cout<<-1;
    return 0;
}