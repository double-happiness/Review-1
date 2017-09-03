Fibonacci数列是这样定义的：
F[0] = 0
F[1] = 1
for each i ≥ 2: F[i] = F[i-1] + F[i-2]
因此，Fibonacci数列就形如：0, 1, 1, 2, 3, 5, 8, 13, ...，在Fibonacci数列中的数我们称为Fibonacci数。给你一个N，你想让其变为一个Fibonacci数，每一步你可以把当前数字X变为X-1或者X+1，现在给你一个数N求最少需要多少步可以变为Fibonacci数。
输入描述:
输入为一个正整数N(1 ≤ N ≤ 1,000,000)
输出描述:
输出一个最小的步数变为Fibonacci数"

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
