#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n=0,m=0;
    cin>>n>>m;
    int adj[n+1][m+1]={0};
    int i=0,u=0,v=0,j=0;
    for(i=0;i<n;i++)
    {
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cout<<adj[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}
