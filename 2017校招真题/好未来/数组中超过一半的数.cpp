//数组里出现超过一半的数
题目描述
输入n个整数，输出出现次数大于等于数组长度一半的数。
输入描述:
每个测试输入包含 n个空格分割的n个整数，n不超过100，其中有一个整数出现次数大于等于n/2。
输出描述:
输出出现次数大于等于n/2的数。
示例1
输入
3 9 3 2 5 6 7 3 2 3 3 3
输出
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