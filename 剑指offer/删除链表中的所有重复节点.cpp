ɾ�������е��ظ��ڵ�
��Ŀ����
��һ������������У������ظ��Ľ�㣬��ɾ�����������ظ��Ľ�㣬�ظ��Ľ�㲻��������������ͷָ�롣 ���磬����1->2->3->3->4->4->5 �����Ϊ 1->2->5

ListNode* deleteDuplication(ListNode* pHead){
        if(NULL==pHead)
            return NULL;
        ListNode* pre=NULL;
        ListNode* cur=pHead;
        while(cur){
            bool flag=false;
            if(cur->next && cur->val==cur->next->val){
                flag=true;
            }
            if(!flag){
            pre=cur;
            cur=cur->next;
            }else{
                int val=cur->val;
                ListNode* pNext=NULL;
                while(cur && (cur->val==val)){
                    pNext=cur->next;
                    delete cur;
                    cur=pNext;
                }
                if(pre==NULL){
                    pHead=cur;
                }else{
                    pre->next=cur;
                }
            }
        }
        return pHead;
    }