#include<stdio.h>
struct node
{
    int data;
    struct node* next;
};
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
int main()
{
//    while(h!=NULL){
//        h=h->next;
//    }
    node* a;
    a=NULL;
}
