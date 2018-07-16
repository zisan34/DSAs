#include<iostream>
using namespace std;
struct tree
{
    int data;
    tree *left,*right;
};
tree* newkey(int a)
{
    tree* tmp=new tree;
    tmp->data=a;
    tmp->left=tmp->right=NULL;
    return tmp;
}
tree* insertkey(tree* node,int key)
{
    if(node==NULL) return newkey(key);
    if(key<=node->data)
    {
         node->left=insertkey(node->left,key);
    }
    else
        node->right=insertkey(node->right,key);
    return node;
}
tree* inorder(tree* root)
{
    if(root!=NULL)
    {
    cout<<root->data<<" ";
    inorder(root->left);
    inorder(root->right);
    }
}
int main()
{
    tree* root=NULL;
    root=insertkey(root,5);
    insertkey(root,6);
    insertkey(root,7);
    insertkey(root,8);
    insertkey(root,9);
    insertkey(root,0);
    insertkey(root,12);
    insertkey(root,4);
    insertkey(root,3);
    inorder(root);

}
