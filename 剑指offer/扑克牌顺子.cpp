�˿��Ƶ�˳��

LL���������ر��,��Ϊ��ȥ����һ���˿���,���������Ȼ��2������,2��С��(һ����ԭ����54��^_^)...��������г����5����,�����Լ�������,�����ܲ��ܳ鵽˳��,����鵽�Ļ�,������ȥ��������Ʊ,�ٺ٣���������A,����3,С��,����,��Ƭ5��,��Oh My God!������˳��.....LL��������,��������,������\С �����Կ����κ�����,����A����1,JΪ11,QΪ12,KΪ13�������5���ƾͿ��Ա�ɡ�1,2,3,4,5��(��С���ֱ���2��4),��So Lucky!����LL����ȥ��������Ʊ���� ����,Ҫ����ʹ�������ģ������Ĺ���,Ȼ���������LL��������Ρ�Ϊ�˷������,�������Ϊ��С����0

bool IsContinuous( vector<int> numbers ) {
        //ͳ��0�ĸ���
        if(numbers.empty())
            return false;
        int zero=0;
        sort(numbers.begin(),numbers.end());
        for(size_t i=0;i<numbers.size();i++){
            if(numbers[i]==0)
                ++zero;
        }
        int small=zero;
        int big=small+1;
        int numberOfGap=0;
        while(big<numbers.size()){
            if (numbers[small] == numbers[big]) {
                return false;
            }
            numberOfGap += numbers[big] - numbers[small] - 1;
            ++small;
            ++big;
        }
        return (numberOfGap > zero) ? false : true;
    }
