//�͹�
��Ŀ����
ĳ�͹���n�����ӣ�ÿ��������һ��������a �����ɵ���������� ��m�����ˣ�ÿ����������������:b������cԤ�����ѽ� �ڲ�����ƴ��������£���ʵ��һ���㷨ѡ������һ���ֿ��ˣ�ʹ����Ԥ�����ѽ�����
��������:
�������m+2�С�
��һ����������n(1 <= n <= 50000),m(1 <= m <= 50000)
�ڶ���Ϊn������a,��ÿ�����ӿ����ɵ��������,�Կո�ָ�,��Χ����32λint��Χ�ڡ�
������m�У�ÿ����������b,c���ֱ��ʾ��i�����˵�������Ԥ�����ѽ��,�Կո�ָ�,��Χ����32λint��Χ�ڡ�
�������:
���һ������,��ʾ������Ԥ�����ѽ��


#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

struct Guste{
    int b;	//����
    int c;	//Ԥ�����ѽ��
};
//���ս������������������
int Compare(Guste x,Guste y){
    if(x.c==y.c)
        return x.b<y.b;
    return x.c>y.c;
}

int main(){
    int n,m;
    cin>>n>>m;
    //�����������ɵ�����
    multimap<int,int> mp;
    for(int i=0;i<n;i++){
        int per;
        cin>>per;
        mp.insert(make_pair(per,1));
    }
    //�˿���Ϣ
    vector<Guste> v;
    for(int i=0;i<m;i++){
        int b0,c0;
        cin>>b0>>c0;
        Guste tmp;
        tmp.b=b0;
        tmp.c=c0;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end(),Compare);
    long long money=0;
    for(int i=0;i<m;i++){
        map<int,int>::iterator it=mp.lower_bound(v[i].b);
        if(it!=mp.end()){
            mp.erase(it);
            money+=v[i].c;
        }
    }
    cout<<money<<endl;
    return 0;
}