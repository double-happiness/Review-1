//ɾ�������ַ�
��Ŀ����
���������ַ������ӵ�һ�ַ�����ɾ���ڶ����ַ��������е��ַ������磬���롱They are students.���͡�aeiou������ɾ��֮��ĵ�һ���ַ�����ɡ�Thy r stdnts.��
��������:
ÿ�������������2���ַ���
�������:
���ɾ������ַ���
ʾ��1
���룺
They are students.        
aeiou

�����
Thy r stdnts.

#include<iostream>
#include<string>

using namespace std;

int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    int hash[256]={0};
    for(int i=0;i<str2.size();++i ){
        hash[str2[i]]++;
    }
    for(string::iterator it=str1.begin();it!=str1.end();++it){
        if(hash[*it]>0){
            str1.erase(it);
            --it;
        }
    }
    cout<<str1<<endl;
    return 0;
}