#include<iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *head=NULL;
int size=1;
void insert_nth(int n,int x)
{
    node *tmp=new node;
    tmp->data=x;
    tmp->link=NULL;
    if(n==1)
        {
            head=tmp;
            return;
        }
    node *tmp1=head;
    for(int i=1;i<n-1;i++)
    {
        tmp1=tmp1->link;
    }
    tmp->link=tmp1->link;
    tmp1->link=tmp;
    size++;
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
void delete_nth(int n)
{
    node* tmp=head;
    if(n==1)
    {
        head=tmp->link;
        delete tmp;
        return;
    }
    else if(n>size||n==0)
    {
        cout<<"Enter a valid position."<<endl;
        return;
    }
    for(int i=1;i<n-1;i++)
    {
        tmp=tmp->link;
//        cout<<tmp->data;
    }
    node* tmp1=tmp->link;
    tmp->link=tmp1->link;
    delete tmp1;
//    cout<<tmp1->data;



}

int main()
{
    insert_nth(1,1);
    insert_nth(2,2);
    insert_nth(3,3);
    insert_nth(4,4);
    insert_nth(5,5);
    insert_nth(6,6);
    insert_nth(7,7);
    print();
    delete_nth(7);
    print();

}
