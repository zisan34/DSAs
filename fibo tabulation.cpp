#include<iostream>
using namespace std;
int fib(int a)
{
    int f[a+1];
    f[0]=0, f[1]=1;
    for(int i=2;i<=a;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    return f[a];
}
int main()
{
    cout<<fib(40);
}
