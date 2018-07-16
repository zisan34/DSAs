#include<iostream>
using namespace std;
struct node
{
    int data;
    node* link;
};
node* head=NULL;
void insert(int x)
{
    node* tmp=new node();
    tmp->data=x;
    tmp->link=NULL;
    if(head==NULL)
        head=tmp;
    else if(head!=NULL)
    {
        node* tmp1=head;
        while(tmp1->link!=NULL)
        {
            tmp1=tmp1->link;
        }
        tmp1->link=tmp;
    }
}
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
void insert_nth(int x,int n)
{
    node* nth=new node();
    nth->data=x;
    nth->link=NULL;
    if(n==1)
    {
        nth->link=head;
        head=nth;
        return;
    }
    node* tmp=head;
    for(int i=1;i<n-1;i++)
    {
        tmp=tmp->link;
    }
    nth->link=tmp->link;
    tmp->link=nth;

}
int main()
{
    int x=0,n=0;
//    cin>>n;
    insert(1);
    insert(2);
    insert(5);
    insert(9);
    insert(10);
    print();
    cout<<"enter data and position:"<<endl;
    cin>>x>>n;
    insert_nth(x,n);
    print();

}
