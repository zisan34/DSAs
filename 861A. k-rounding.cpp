#include<iostream>
using namespace std;
bool haszeros(long long a, int n)
{
    int tmp=0;
    while(a%10==0)
    {
        tmp++;
        a/=10;
    }
    if(tmp>=n)return true;
    else return false;
}
int main()
{
    long long n,k,x=1,tmp=1;
    cin>>n>>k;
    x=n;
    int flag=0;
    while(flag==0)
    {
        if((x%n==0)&&(haszeros(x,k)==true))
        {
            flag=1;
        }
        else
        {
            x=n*tmp;
            tmp++;
        }
    }
    cout<<x<<endl;
//    for(int i=0;i<k;i++)
//        x*=10;
////    cout<<x<<endl;
//    tmp=x;
//    if(x%n==0)
//        cout<<x<<endl;
//    else
//    {
//        while(x%n!=0)
//            x+=tmp;
//    }
//    cout<<x<<endl;
    return 0;
}
