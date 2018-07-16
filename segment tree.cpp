#include<iostream>
#define MAX 100
using namespace std;
int arr[MAX];
int tree[MAX*3];
int init(int node,int s,int e)
{
    if(s==e)
    {
        tree[node]=arr[s];
        return tree[node];
    }
    int left=node*2;
    int right=(node*2)+1;
    int mid=(s+e)/2;
//    if return type is void
//    init(left,s,mid);
//    init(right,mid+1,e);
//    tree[node]=tree[left]+tree[right];

    tree[node]=init(left,s,mid)+init(right,mid+1,e);
    return tree[node];
}
int query(int node,int s,int e,int i,int j)
{
    if(i>e||j<s)return 0;
    if(i<=s&&j>=e)return tree[node];
    int left=node*2;
    int right=(node*2)+1;
    int mid=(s+e)/2;
    int res=query(left,s,mid,i,j)+query(right,mid+1,e,i,j);
    return res;
}
void update(int node,int s,int e, int index,int value)
{
    if(s>index||e<index)return;
    if(s==e){ tree[node]=value; return;}
    int left=node*2;
    int right=(node*2)+1;
    int mid=(s+e)/2;
    update(left,s,mid,index,value);
    update(right,mid+1,e,index,value);
    tree[node]=tree[left]+tree[right];
}
int main()
{
    arr[0]=-1;
    tree[0]=-1;
    int n=10;
    for(int i=1;i<=n;i++)
        arr[i]=i;
        //cin>>arr[i];
    init(1,1,n);
    for(int i=1;i<=n*3;i++)
        cout<<tree[i]<<" ";
    cout<<endl<<query(1,1,n,3,7)<<endl;
    cout<<query(1,1,n,5,5)<<endl;
    update(1,1,n,5,20);
    cout<<query(1,1,n,5,5)<<endl;

    for(int i=1;i<=n*3;i++)
        cout<<tree[i]<<" ";


}
