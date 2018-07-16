#include<iostream>
using namespace std;
struct bst
{
    int data;
    bst* left;
    bst *right;
};
bst* getkey(int x)
{
    bst* tmp=new bst();
    tmp->data=x;
    tmp->right=tmp->left=NULL;
    return tmp;
}
bst* insertkey(bst* a,int b)
{
    if(a==NULL)
    {
        a=getkey(b);
    }
    else if(b<=a->data)
    {
        a->left=insertkey(a->left,b);
    }
    else
        a->right=insertkey(a->right,b);
    return a;
}
void printinorder(bst* a)
{
    if(a!=NULL){
    printinorder(a->left);
    cout<<a->data<<" ";
    printinorder(a->right);
    }
}

int main()
{
    bst *root=NULL;
    root=insertkey(root,7);
    insertkey(root,6);
    insertkey(root,60);
    insertkey(root,5);
    printinorder(root);
}
