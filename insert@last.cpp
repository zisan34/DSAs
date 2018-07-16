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
    node* tmp=new node;
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
int main()
{
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insert(x);
        print();
    }
    print();

}
