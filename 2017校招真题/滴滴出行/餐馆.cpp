//餐馆
题目描述
某餐馆有n张桌子，每张桌子有一个参数：a 可容纳的最大人数； 有m批客人，每批客人有两个参数:b人数，c预计消费金额。 在不允许拼桌的情况下，请实现一个算法选择其中一部分客人，使得总预计消费金额最大
输入描述:
输入包括m+2行。
第一行两个整数n(1 <= n <= 50000),m(1 <= m <= 50000)
第二行为n个参数a,即每个桌子可容纳的最大人数,以空格分隔,范围均在32位int范围内。
接下来m行，每行两个参数b,c。分别表示第i批客人的人数和预计消费金额,以空格分隔,范围均在32位int范围内。
输出描述:
输出一个整数,表示最大的总预计消费金额


#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

struct Guste{
    int b;	//人数
    int c;	//预计消费金额
};
//按照金额降序，人数升序进行排序
int Compare(Guste x,Guste y){
    if(x.c==y.c)
        return x.b<y.b;
    return x.c>y.c;
}

int main(){
    int n,m;
    cin>>n>>m;
    //桌子所能容纳的人数
    multimap<int,int> mp;
    for(int i=0;i<n;i++){
        int per;
        cin>>per;
        mp.insert(make_pair(per,1));
    }
    //顾客信息
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