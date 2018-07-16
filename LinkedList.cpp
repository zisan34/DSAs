#include<iostream>
using namespace std;
struct node
{
    int data;
    node* link;
};
node* insert_last(node* head,int a)
{
    node* tmp=new node;
    tmp->data=a;
    tmp->link=NULL;
    if(head==NULL)
    {
        head=tmp;
    }
    else
    {
        node* tmp1=head;
        while(tmp1->link!=NULL)
        {
            tmp1=tmp1->link;
        }
        tmp1->link=tmp;
    }
    return head;
}
void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->link;
    }
    cout<<endl;
}
node* reverse_loop(node* s)
{
    node *current,*prev,*next;
    current=s;
    prev=NULL;
    while(current!=NULL)
    {
        next=current->link;
        current->link=prev;
        prev=current;
        current=next;
    }
    s=prev;
    return s;
}
int main()
{
    node* head=NULL;
    head=insert_last(head,6);
    head=insert_last(head,3);
    head=insert_last(head,9);
    head=insert_last(head,19);
    head=insert_last(head,7);
    print(head);
    head=reverse_loop(head);
    print(head);
    return 0;
}
