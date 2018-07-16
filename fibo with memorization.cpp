#include<iostream>
using namespace std;
#define MAX 35
#define NIL -1
int lookup[MAX];
void initialize()
{
    for(int i=0;i<MAX;i++)
        lookup[i]=NIL;
}
int fibo(int a)
{
    if(lookup[a]=NIL)
    {
        if(a<=1)
            lookup[a]=a;
        else
            lookup[a]=fibo(a-1)+fibo(a-2);
    }
    return lookup[a];
}
int main()
{
    cout<<fibo(30)<<endl;
    for(int i=0;i<MAX;i++)
    {
        if(3==lookup[i])cout<<"3 is fibo"<<endl;
        if(21==lookup[i])cout<<"21 also"<<endl;
    }
}
