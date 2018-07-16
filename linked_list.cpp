#include<iostream>
#include<cstdio>
using namespace std;
struct node
{
    int data;
    node* link;
};
node* head=NULL;
node* next=NULL;
//head=NULL;
node* temp =new node();
int main()
{
    temp->data=2;
    temp->link=NULL;
    head=temp;
//    cout<<head->data<<endl;
    temp->data=6;
    temp->link=NULL;
    next=temp;
//    cout<<next->data<<endl;
    for(int i=5;i<20;i+=5)
    {
        temp->data=i;
        temp->link=NULL;
        next=temp;
    }
//    cout<<next->data<<endl;
    node* temp1=head;
    while(temp1->link!=NULL)
    {
        cout<<1<<endl;
        cout<<temp1->data<<endl;
        temp1=temp1->link;
    }
}
