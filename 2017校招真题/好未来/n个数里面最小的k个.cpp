//n����������С��k��
��Ŀ����
�ҳ�n��������С��k��
��������:
ÿ��������������ո�ָ��n+1�����������һ������Ϊkֵ,n
������100��
�������:
���n����������С��k�������������
ʾ��1
����
3 9 6 8 -10 7 -11 19 30 12 23 5
���
-11 -10 3 6 7


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    vector<int> v;
    while(cin>>n){
        v.push_back(n);
    }
    int k=v[v.size()-1];
    v.pop_back();
    sort(v.begin(),v.end());
    for(int i=0;i<k-1;++i){
        cout<<v[i]<<" ";
    }
    cout<<v[k-1]<<endl;
    return 0;
}