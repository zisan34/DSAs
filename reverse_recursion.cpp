#include<iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node* insert_last(node* a,int b)
{
    node *tmp=new node;
    tmp->data=b;
    tmp->link=NULL;
    if(a==NULL)
        a=tmp;
    else
    {
        node *tmp1=a;
        while(tmp1->link!=NULL)
        {
            tmp1=tmp1->link;
        }
        tmp1->link=tmp;
    }
    return a;
}
void print(node* a)
{
    if(a==NULL)
    {
        cout<<endl;
        return;
    }
    cout<<a->data<<" ";
    print(a->link);
}
node* reverse_recursion(node* a)
{
    node* tmp;
    if(a->link==NULL)
    {
        return a;
    }
    tmp=reverse_recursion(a->link);
    node *tmp1=a->link;
    tmp1->link=a;
    a->link=NULL;
    return tmp;
}

int main()
{
    node *head=NULL;
    head=insert_last(head,8);
    head=insert_last(head,5);
    head=insert_last(head,9);
    head=insert_last(head,7);
    print(head);
    head=reverse_recursion(head);
    print(head);
}
