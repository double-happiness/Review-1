//第一个只出现一次的字符   
int FirstNotRepeatingChar(string str) {
        if(str.size()==0)
            return -1;
        char ch[256]={0};
        for(int i=0;i<str.size();i++)
            ch[str[i]]++;
        for(int i=0;i<str.size();i++)
            if(ch[str[i]]==1)
                return i;
        return 0;
         
    }