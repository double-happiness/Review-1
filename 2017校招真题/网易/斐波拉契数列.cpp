Fibonacci��������������ģ�
F[0] = 0
F[1] = 1
for each i �� 2: F[i] = F[i-1] + F[i-2]
��ˣ�Fibonacci���о����磺0, 1, 1, 2, 3, 5, 8, 13, ...����Fibonacci�����е������ǳ�ΪFibonacci��������һ��N�����������Ϊһ��Fibonacci����ÿһ������԰ѵ�ǰ����X��ΪX-1����X+1�����ڸ���һ����N��������Ҫ���ٲ����Ա�ΪFibonacci����
��������:
����Ϊһ��������N(1 �� N �� 1,000,000)
�������:
���һ����С�Ĳ�����ΪFibonacci��"

#include<iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int arr[1000000];
    int i=0;
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<1000000;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    int j=0;
    for(i=1;i<1000000;i++){
        if(arr[i]>=N){
            j=i;
            break;
        }
    }
    int ret1=arr[j]-N;
    int ret2=N-arr[j-1];
    if(ret1>ret2)
        cout<<ret2<<endl;
    else
        cout<<ret1<<endl;
    return 0;
}
