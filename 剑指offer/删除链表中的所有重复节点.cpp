删除链表中的重复节点
题目描述
在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，返回链表头指针。 例如，链表1->2->3->3->4->4->5 处理后为 1->2->5

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