����һ���ַ���str������ַ���str�е�����������ִ�
��������:
�������������1������������һ���ַ���str�����Ȳ�����255��
�������:
��һ�������str��������������ִ���
ʾ��1
���룺abcd12345ed125ss123456789
�����123456789

#include<iostream>

using namespace std;

int main(){
    string inStr;
    cin>>inStr;
    size_t i=0;
    int count=0,maxlen=0;
    int pos=0;
    for(int i=0;i<=inStr.size();i++){
        if(isdigit(inStr[i]))
            count++;
        else{
            if(count>maxlen){
                maxlen=count;
                pos=i-count;
            }
            count=0;
        }
    }
    string outStr;
    for(i=0;i<maxlen;i++){
        outStr+=inStr[pos+i];
    }
    cout<<outStr<<endl;
    return 0;
}