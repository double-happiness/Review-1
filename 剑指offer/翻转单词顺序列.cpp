//��ת����˳����
//ţ���������һ����Ա��Fish��ÿ���糿���ǻ�����һ��Ӣ����־��дЩ�����ڱ����ϡ�ͬ��Cat��Fishд�������ĸ���Ȥ����һ������Fish������������ȴ������������˼�����磬��student. a am I������������ʶ������һ�ԭ���Ѿ��ӵ��ʵ�˳��ת�ˣ���ȷ�ľ���Ӧ���ǡ�I am a student.����Cat��һһ�ķ�ת��Щ����˳��ɲ����У����ܰ�����ô��
string ReverseSentence(string str) {
        int len=str.size();
        if(len==0)
            return "";
        Reverse(str,0,len-1);
        int begin=0;
        int end=0;
        while(str[begin]!='\0')
        {
            //�����������ֵĶ���ո�
            if(str[begin]==' '){
                begin++;
                end++;
            }
            else if(str[end]==' ' || str[end]=='\0'){
                Reverse(str,begin,--end);
                begin=++end;
            }
            else
            {
                end++;
            }
        }
        return str;
    }
    void Reverse(string &str,int begin,int end)
    {
        while(begin<end)
            swap(str[begin++],str[end--]);
    }