void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{

    if(root == NULL) return;
    
    findPreSuc(root->left, pre, suc, key);
    
    if(root->key<key){
        pre = root;    
    }
    
    if(suc==NULL && root->key>key){
        suc = root;
    }
    
    findPreSuc(root->right,pre,suc, key);
}
