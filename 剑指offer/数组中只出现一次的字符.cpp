//数组中只出现一次的字符
void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
		int i=0;
        int length=data.size();
        int count=0;
        if(length<=2)
            return ;
        int tmp=data[0];
        for(i=1;i<length;i++)
        {
            tmp=tmp^data[i];
        }
        if(tmp==0)
            return;
        while((tmp&1)==0)
        {
            tmp=tmp>>1;
            count++;
        }
        *num1=*num2=0;
        for(i=0;i<length;i++)
        {
            if(IsBit(data[i],count))
                *num1=*num1^data[i];
            else
                *num2=*num2^data[i];
        }
    }
    bool IsBit(int num,int index)
    {
        num=num>>index;
        return (num&1);
    }