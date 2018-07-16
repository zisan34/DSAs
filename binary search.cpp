#include<iostream>
using namespace std;
int bsearch(int a[],int l,int key)
{;
    int start=0,index=-1,end=l-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(key==a[mid]){index=mid;break;}
        //for most right index;
        //if(key==a[mid]){index=mid; start=mid+1;}
        else if(key>a[mid])start=mid+1;
        else if(key<a[mid])end=mid-1;
    }
    return index;
}
int lower(int a[],int l,int key)
{
    int start=0,end=l-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(key==a[mid]){end=mid-1;}
        else if(key>a[mid])start=mid+1;
        else end=mid-1;
    }
    return start;
}
int upper(int a[],int l,int key)
{
    int start=0,index=-1,end=l-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(key==a[mid]){start=mid+1;}
        else if(key>a[mid])start=mid+1;
        else end=mid-1;
    }
    return start;
}
int main()
{
    int arr[]={1,2,3,4,5,5,5,5,5,7,7,8,9,10};
//    for(int i=0;i<10;i++)
//        cout<<arr[i]<<" ";
    int length=sizeof(arr)/sizeof(arr[0]);
    //cout<<length<<endl;
    if(bsearch(arr,length,5)==-1)cout<<"not found"<<endl;
    else cout<<"index:"<<bsearch(arr,length,5)<<endl;
    cout<<"lower bound: "<<lower(arr,length,5)<<endl;
    cout<<"upper bound: "<<upper(arr,length,5)<<endl;
}
