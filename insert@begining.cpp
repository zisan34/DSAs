#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next_link;
};
node* head;
void insert(int x)
{
    node* tmp=new node();
    tmp->data=x;
//    tmp->next_link=NULL;
//    if(head!=NULL)
        tmp->next_link=head;
//    tmp->next_link=head;
    head=tmp;
}
void print()
{
    node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<" ";
        tmp=tmp->next_link;
    }
    cout<<endl;
}
int main()
{
    head =NULL;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insert(x);
        print();
    }

}
