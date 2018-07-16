#include<iostream>
using namespace std;
struct node
{
    int data;
    node* link;
};
node* head=NULL;
void print()
{
    node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<" ";
        tmp=tmp->link;
    }
    cout<<endl;
}
void insert_last(int a)
{
    node* tmp=new node;
    tmp->data=a;
    tmp->link=NULL;
    node* tmp1=head;
    if(tmp1==NULL)
    {
        head=tmp;
    }
    else
    {
    while(tmp1->link!=NULL)
    {
        tmp1=tmp1->link;
    }
    tmp1->link=tmp;
    }
}
void insert_first(int x)
{
    node* tmp=new node;
    tmp->data=x;
     tmp->link=head;
    head=tmp;
}
void reverse_loop()
{
    node *current,*next,*prev;
    current=head;
    prev=NULL;
    while(current!=NULL)
    {
        next=current->link;
        current->link=prev;
        prev=current;
        current=next;
    }
    head=prev;

}

int main()
{
    insert_last(5);
    insert_last(6);
    insert_last(9);
    insert_last(8);
    print();
    insert_first(17);
    insert_first(18);
    print();
    reverse_loop();
    print();

}
