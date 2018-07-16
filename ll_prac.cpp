#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node* link;
};
node *head=NULL;
void insert_first(int a)
{
    node *tmp=new node;
    tmp->data=a;
    tmp->link=head;
    head=tmp;
}
void insert_last(int a)
{
    node *tmp=new node;
    tmp->data=a;
    tmp->link=NULL;
    if(head==NULL)
        head=tmp;
    else
    {
        node *tmp1=head;
        while(tmp1->link!=NULL)
            tmp1=tmp1->link;
        tmp1->link=tmp;
    }
}
//void insert_nth(int n,int a)
//{
//    node* tmp=new tmp;
//    tmp->data=a;
//    node *tmp1=head;
//    for(int i=1;i<n-1;i++)
//        tmp1=tmp1->link;
//    tmp->link=tmp1->link;
//    delete tmp1;
//
//}
void print()
{
    node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<" ";
        tmp=tmp->link;
    }
    cout<<endl;
}
int main()
{
    insert_first(6);
    insert_first(4);
    insert_first(2);
    insert_first(8);
    insert_first(5);
    print();
    insert_last(99);
    insert_last(93);
    insert_last(95);
    insert_last(98);
    print();
}
