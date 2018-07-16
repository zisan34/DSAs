#include<bits/stdc++.h>
//directed weighted graph
using namespace std;
int main()
{
    int node,edge;
    cin>>node>>edge;
    vector<int> edges[node];
    vector<int> cost[node];
    for(int i=0;i<edge;i++)
    {
        int n1,n2,c;
        cin>>n1>>n2;
        edges[n1-1].push_back(n2);
        cost[n1-1].push_back(1);
    }
    cout<<"Out degrees:"<<endl;
    for(int i=0;i<node;i++)
    {
        cout<<i+1<<": ";
        int iths=edges[i].size();
        for(int j=0;j<iths;j++)
        {
            cout<<edges[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<int> indegree[node];
    for(int i=0;i<node;i++)
    {
        int iths=edges[i].size();
        for(int j=0;j<iths;j++)
        {
            int a=edges[i][j];
            indegree[a-1].push_back(i+1);
        }
    }
    cout<<"In degrees:"<<endl;
    for(int i=0;i<node;i++)
    {
        int iths=indegree[i].size();
        cout<<i+1<<": ";
        for(int j=0;j<iths;j++)
            cout<<indegree[i][j]<<" ";
        cout<<endl;
    }

}
