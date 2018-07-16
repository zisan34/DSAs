#include<bits/stdc++.h>
#define MAX 10000
//directed weighted graph
using namespace std;
int main()
{
    int node,edge;
    cin>>node>>edge;
    vector<int> edges[node+1];
    vector<int> cost[node+1];
    for(int i=1;i<=edge;i++)
    {
        int n1,n2,c;
        cin>>n1>>n2;
        edges[n1].push_back(n2);
        cost[n1].push_back(1);
    }
//    cout<<"Out degrees:"<<endl;
//    for(int i=1;i<=node;i++)
//    {
//        cout<<i<<": ";
//        int iths=edges[i].size();
//        for(int j=0;j<iths;j++)
//        {
//            cout<<edges[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    vector<int> indegree[node+1];
    for(int i=1;i<=node;i++)
    {
        int iths=edges[i].size();
        for(int j=0;j<iths;j++)
        {
            int a=edges[i][j];
            indegree[a].push_back(i);
        }
    }
//    cout<<"In degrees:"<<endl;
//    for(int i=1;i<=node;i++)
//    {
//        int iths=indegree[i].size();
//        cout<<i<<": ";
//        for(int j=0;j<iths;j++)
//            cout<<indegree[i][j]<<" ";
//        cout<<endl;
//    }
    int level[node+1];
    for(int i=0;i<=node;i++)level[i]=MAX;
    int cn=1;
    level[cn]=0;
    int parent[node+1];
    parent[cn]=MAX;
    queue<int> q;
    q.push(cn);
    while(!q.empty())
    {
        int pn=q.front();
        q.pop();
        int s=edges[pn].size();
        for(int i=0;i<s;i++)
            {
                cn=edges[pn][i];
                if(level[cn]==MAX)
                {q.push(cn);
                level[cn]=level[pn]+1;
                parent[cn]=pn;
                }
            }

    }
    cout<<"levels:";
    for(int i=1;i<=node;i++)
        cout<<level[i]<<" ";
    cout<<endl<<"Parents:";
    for(int i=1;i<=node;i++)
        cout<<parent[i]<<" ";

}

