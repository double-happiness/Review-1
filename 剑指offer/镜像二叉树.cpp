void Mirro(Node* root)  
{  
    if (root == NULL || (root->left == NULL&&root->right == NULL))  
        return;  
    Node* tmp = root->left;  
    root->left = root->right;  
    root->right = tmp;  
    if (root->left != NULL)  
        Mirro(root->left);  
    if (root->right != NULL)  
        Mirro(root->right);  
}