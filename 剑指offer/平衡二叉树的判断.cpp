typedef struct TreeNode  
{  
    int val;  
    struct TreeNode* left;  
    struct TreeNode* right;  
    TreeNode(int data)  
        : val(data)  
        , left(NULL)  
        , right(NULL)  
    {}  
}Node;  
  
  
int TreeDepth(Node* root)  
{  
    if (root == NULL)  
        return 0;  
    int leftDepth = TreeDepth(root->left);  
    int rightDepth = TreeDepth(root->right);  
    return (leftDepth > rightDepth) ? (leftDepth + 1) : (rightDepth + 1);  
}  
  
bool IsBalanceTree(Node* root)  
{  
    if (NULL == root)  
        return true;  
    int leftDepth = TreeDepth(root->left);  
    int rightDepth = TreeDepth(root->right);  
    int diff = leftDepth - rightDepth;  
    if (diff > 1 || diff < -1)  
        return false;  
    return IsBalanceTree(root->left) && IsBalanceTree(root->right);  
}