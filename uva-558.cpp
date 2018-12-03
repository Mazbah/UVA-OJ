#include<bits/stdc++.h>
using namespace std;
#define inf 100000

struct edge{
    int u;
    int v;
    int w;
}e[2010];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=0;i<m;i++)
            cin>>e[i].u>>e[i].v>>e[i].w;

        int d[1010];
        for(int i=0;i<=n;i++)
            d[i] = inf;

        d[0] = 0;

        for(int i=0;i<n-1;i++){
            for(int j=0;j<m;j++){
                if(d[e[j].u] + e[j].w < d[e[j].v])
                    d[e[j].v] = d[e[j].u] + e[j].w;
            }
        }

        bool ny = false;
        for(int j=0;j<m;j++){
            if(d[e[j].u] + e[j].w < d[e[j].v])
                ny = true;
        }
        if(ny) cout<<"possible\n";
        else cout<<"not possible\n";
    }
    return 0;
}
