#include<iostream>
using namespace std;
#define max 10
int aq[max];
int front=-1;
int rear=-1;
bool isempty()
{
    if(front==-1&&rear==-1)
        return true;
    else
        return false;
}
bool isfull()
{
    if(rear==max)
        return true;
    else
        return false;
}
void enqueue(int x)
{
    if(isfull())
        return;
    else if(isempty())
    {
        front=rear=0;
        aq[rear]=x;
    }
    else
    {
        rear++;
        aq[rear]=x;
    }
}
void dequeue()
{
    if(isempty())
        return;
    else if(front==rear)
        front=rear=-1;
    else
        front++;
}
int top()
{
    return aq[front];
}
int main()
{
    enqueue(5);
    enqueue(4);
    enqueue(9);
    enqueue(2);
    enqueue(8);
    cout<<top()<<endl;
    enqueue(7);
    enqueue(6);
    dequeue();
    cout<<top()<<endl;
    dequeue();
    cout<<top()<<endl;
}
