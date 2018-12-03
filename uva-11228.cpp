#include<bits/stdc++.h>
using namespace std;
#define MAX 100000

int p[MAX],m;
int ms(int n)
{
    for(int i=0;i<=n;i++){
        p[i] = i;
    }
}

int fs(int r)
{
    for(int i=0;i<=r;i++){
        if(p[r] == r) return r;
        return fs(p[r]);
    }
}

struct Edge{
    int u,v;
    double w;
    bool operator <(const Edge &p) const
    {
        return w<p.w;
    }
};

vector<Edge> e;
double dist[1000][10];

void krushkal(int n)
{
    double rail,road;
    int c,state;
    c = 0;
    state = 1;
    rail = 0;
    road = 0;
    sort(e.begin(),e.end());
    ms(n);

    for(int i=0;i<(int)e.size();i++){
        int u = fs(e[i].u);
        int v = fs(e[i].v);

        if(u != v){
            p[u] = v;
            if(e[i].w<=m){
                c++;
                road += e[i].w;
            }
            else
                rail += e[i].w;
        }
    }
    state = n-c;
    printf("%d %.lf %.lf\n", state, road, rail);
}

int main()
{
    int n,t,k,c=0;
    int dx,dy;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>dist[i][0]>>dist[i][1];
        }
        e.clear();

        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++){
                Edge data;
                data.u  = i;
                data.v = j;
                dx = dist[i][0] - dist[j][0];
                dy = dist[i][1] - dist[j][1];
                data.w = sqrt(dx*dx + dy*dy);
                e.push_back(data);
            }
         printf("Case #%d: ", ++c);
         krushkal(n);
    }
    return 0;
}
