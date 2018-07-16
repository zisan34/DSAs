#include<iostream>
#include<string>
using namespace std;
struct node
{
    int data;
    node* link;
};
node *top=NULL;
void push(int a)
{
    node* tmp=new node;
    tmp->data=a;
    tmp->link=top;
    top=tmp;
}
void pop()
{
    node* tmp=top;
    if(top==NULL)return;
    top=tmp->link;
    delete tmp;
}
void print()
{
    node* tmp=top;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<" ";
        tmp=tmp->link;
    }
    cout<<endl;
}
bool isempty()
{
    if(top==NULL)return true;
    else return false;
}
int gettop()
{
    return top->data;
}
string stringreverse(string c,int n)
{
    for(int i=0;i<n;i++)
    {
        push(c[i]);
    }
    for(int i=0;i<n;i++)
    {
        c[i]=gettop();
        pop();
    }
    return c;
}
int main()
{
//    push(5);
//    print();
//    pop();
//    print();
//    push(7);
//    push(9);
//    print();
//    cout<<isempty()<<endl;
    string s="adfaad";

    string c=stringreverse(s,s.length());
    cout<<c<<endl;

}
