#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
    node* prev;
};
node* head;

node* GetNewNode(int a)
{
    node *tmp=new node;
    tmp->data=a;
    tmp->next=NULL;
    tmp->prev=NULL;
    return tmp;
}

void insertAtHead(int x)
{
    node *NewNode=GetNewNode(x);
    if(head==NULL)
    {
        head=NewNode;
        return;
    }
    NewNode->next=head;
    head->prev=NewNode;
    head=NewNode;

}
void insertAtTail(int x)
{
    node *newNode=GetNewNode(x);
    node *tmp=head;
    if(head==NULL)
    {
        head=tmp;
    }
    else
    {
        while(tmp->next!=NULL)
        {tmp=tmp->next;}
        tmp->next=newNode;
        newNode->prev=tmp;
    }
}
void print()
{
    node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void reverseprint()
{
    node* tmp=head;
    if(tmp==NULL)return;
    while(tmp->next!=NULL)
    {
//        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
    cout<<"Reverse:"<<endl;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}


int main()
{
    insertAtHead(5);
    insertAtHead(6);
    insertAtHead(7);
    print();
    insertAtTail(69);
    print();
    reverseprint();
}

