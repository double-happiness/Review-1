//二叉树的下一个节点
//给定一个二叉树和其中的一个结点，请找出中序遍历顺序的下一个结点并且返回。注意，树中的结点不仅包含左右子结点，同时包含指向父结点的指针。   
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