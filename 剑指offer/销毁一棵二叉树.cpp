//Ïú»ÙÒ»¿Å¶þ²æÊ÷-->Destroy(Node* root)
void _Destory(Node* root)
{
	if (root == NULL)
		return;

	_Destory(root->_left);
	_Destory(root->_right);
	delete root;
}