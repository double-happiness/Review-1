//����������һ���ڵ�
//����һ�������������е�һ����㣬���ҳ��������˳�����һ����㲢�ҷ��ء�ע�⣬���еĽ�㲻�����������ӽ�㣬ͬʱ����ָ�򸸽���ָ�롣   
 TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
        if(NULL==pNode)
            return NULL;
        TreeLinkNode* pNext=NULL;
        if(pNode->right!=NULL){
            TreeLinkNode* pRight=pNode->right;
            while(pRight->left!=NULL){
                pRight=pRight->left;
            }
            pNext=pRight;
        }
        else if(pNode->next!=NULL){
            TreeLinkNode* cur=pNode;
            TreeLinkNode* parent=pNode->next;
            while(parent!=NULL&&cur==parent->right){
                cur=parent;
                parent=parent->next;
            }
            pNext=parent;
        }
        return pNext;
    }