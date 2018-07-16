#include<iostream>
#include<stack>
using namespace std;

struct node
{
    int data;
    node* next;
};
node* head=NULL;
node* insertAtHead(int a)
{
    node* tmp=new node;
    tmp->data=a;
    tmp->next=NULL;
    if(head==NULL)
        head=tmp;
    else
    {
        tmp->next=head;
        head=tmp;
    }

}
void print()
{
    node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void reverseWithStack()
{
    if(head==NULL)return;
    stack<node*> S;
    node* tmp=head;
    while(tmp!=NULL)
    {
        S.push(tmp);
        tmp=tmp->next;
    }
    tmp=S.top();
    head=tmp;
    S.pop();
    while(!S.empty())
    {
        tmp->next=S.top();
        S.pop();
        tmp=tmp->next;
    }
    tmp->next=NULL;
}
int main()
{
    insertAtHead(5);
    insertAtHead(3);
    insertAtHead(6);
    insertAtHead(8);
    print();
    reverseWithStack();
    print();
}
