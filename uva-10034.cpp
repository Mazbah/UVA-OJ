#include<bits/stdc++.h>
using namespace std;

#define MAX 1000000

double dist[100][10];
int p[MAX];

int fs(int r)
{
    if(p[r] ==  r) return r;
    return(fs(p[r]));
}

int mp(int i)
{
    for(int k=0;k<i;k++)
        p[k] = k;
}

struct Edge{
    int u,v;
    double w;
    bool operator < (const Edge &p) const{
        return w < p.w;
    }
};

vector<Edge> e;

double krushkal(int n)
{
    double sum =0;
    sort(e.begin(),e.end());
    mp(n);
    for(int i=0;i<(int)e.size();i++){
        int u = fs(e[i].u);
        int v = fs(e[i].v);
        if(u!=v){
            p[u] = v;
            sum+=e[i].w;
        }
    }
    return sum;
}

int main()
{
    int t,n,dx,dy;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>dist[i][0]>>dist[i][1];
        }
        e.clear();
        for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++){
            Edge data;
            data.u = i;
            data.v = j;
            dx = dist[i][0]-dist[j][0];
            dy = dist[i][1] - dist[j][1];
            data.w = sqrt(dx*dx + dy*dy);
            e.push_back(data);
        }

        printf("%.2lf\n",krushkal(n));
        if(t) cout<<endl;
    }
}
