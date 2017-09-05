读入一个字符串str，输出字符串str中的连续最长的数字串
输入描述:
个测试输入包含1个测试用例，一个字符串str，长度不超过255。
输出描述:
在一行内输出str中里连续最长的数字串。
示例1
输入：abcd12345ed125ss123456789
输出：123456789

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