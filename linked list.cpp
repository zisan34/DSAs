#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* head;
node *prev, *start;
//Node* temp=(Node*)malloc(sizeof(Node));

int get_length(struct node* head)
{
    int length=0;
    while(head!=NULL)
    {
        length++;
        head=head->next;
    }
    return length;
}
void Insert_last(int x)
{
    node *temp;
    temp = new node();
    temp->data = x;
    temp->next=NULL;
    if(head != NULL){
        prev->next = temp;
    }
    else
        start = temp;
    head = temp;
    prev = temp;

}
void Insert(int x)
{
    node* temp = new node();
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Print()
{
    node *temp;
    temp  = start;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
//    while(h!=NULL){
//        h=h->next;
//    }

    head=NULL;
    Insert_last(5);
    Insert_last(6);
    Insert_last(3);
    Print();
}

