//����ת�ַ���
//�����������һ����λָ�����ѭ�����ƣ�ROL���������и��򵥵����񣬾������ַ���ģ�����ָ���������������һ���������ַ�����S���������ѭ������Kλ���������������磬�ַ�����S=��abcXYZdef��,Ҫ�����ѭ������3λ��Ľ��������XYZdefabc�����ǲ��Ǻܼ򵥣�OK���㶨����
void Reverse(string &str,int begin,int end){
        while(begin<end){
            char tmp=str[begin];
            str[begin]=str[end];
            str[end]=tmp;
            begin++;
            end--;
        }
    }
    string LeftRotateString(string str, int n) {
        if(str.empty())
            return "";
        if(n>=0 && n<str.size()){
            int b1=0,b2=n,e1=n-1,e2=str.size()-1;
            Reverse(str,b1,e1);
            Reverse(str,b2,e2);
            Reverse(str,b1,e2);
        }
        return str;
    }