#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define MAX 1000005

int p[MAX];
int ms(int n)
{
    for(int i=0;i<=n;i++){
        p[i] = i;
    }
}

inline int fs(int r)
{
    if(p[r] == r) return r;
    return fs(p[r]);
}

struct Edge
{
    int u,v,wi;
    bool operator <(const Edge &p) const
    {
        return wi<p.wi;
    }
}edge[MAX];


int krushkal(int N, int E)
{
    int i;
    ms(N);
    sort(edge, edge + E);
    int ei, cost = 0;
    for (i = 0, ei = 0; i < E&&ei < N - 1; ei++, i++)
    {

        while(fs(edge[i].u) == fs(edge[i].v))i++;
        p[fs(edge[i].u)] = fs(edge[i].v);
        cost += edge[i].wi;
    }
    return cost;
}


int main()
{
    int n,m,k,t,a,b,w;
    bool first = true;
    while(scanf("%d", &n) != EOF)
    {
        int oc = 0,nc;
        for(int i=1;i<n;i++){
            cin>>a>>b>>w;
            oc += w;
        }
        cin>>k;
        for(int i=0;i<k;i++){
            cin>>edge[i].u>>edge[i].v>>edge[i].wi;
        }
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>edge[i+k].u>>edge[i+k].v>>edge[i+k].wi;
        }

        nc = krushkal(n,k+m);
        if(first)
            first = false;
        else
            putchar('\n');
        printf("%d\n%d\n", oc, nc);
    }
    return 0;
}
