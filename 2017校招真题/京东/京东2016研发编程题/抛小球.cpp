抛小球
小东和三个朋友一起在楼上抛小球，他们站在楼房的不同层，假设小东站的楼层距离地面N米，球从他手里自由落下，每次落地后反跳回上次下落高度的一半，并以此类推知道全部落到地面不跳，求4个小球一共经过了多少米？(数字都为整数)
给定四个整数A,B,C,D，请返回所求结果。
测试样例：
100,90,80,70
返回：1020

    double Heigh(double n){
        double ret=n;
        while(n>0){
            ret+=2*n/2;
            n/=2;
        }
        return ceil(ret);
    }
    int calcDistance(int A, int B, int C, int D) {
        // write code here
        return (Heigh(A)+Heigh(B)+Heigh(C)+Heigh(D));
    }