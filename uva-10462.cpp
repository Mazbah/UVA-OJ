#include<bits/stdc++.h>
using namespace std;
#define MAX 110
#define INF 99999

int p[MAX],edget[MAX],et;

int fs(int r)
{
    if(p[r] == r) return r;
    return fs(p[r]);
}

int ms(int n)
{
    for(int i=0;i<=n;i++)
        p[i] = i;
}

struct Edge{
    int u,v,w;
    bool operator<(const Edge &p) const{
        return w < p.w;
    }
};

vector<Edge> e;

int krushkal(int n)
{
    sort(e.begin(),e.end());

    ms(n);
    int sum=0,ans = -1;
    et = 0;
    for(int i=0;i<(int)e.size();i++){
        int u = fs(e[i].u);
        int v = fs(e[i].v);
        if(u!=v){
            p[u] = v;
            edget[et++] = i;
            sum += e[i].w;
            if(et == n-1) break;
        }
    }
    if(et == n-1) ans = sum;
    return ans;
}

int main()
{
    int n,m,t,u,v,w,x,mn;
    cin>>t;
    for(int k=1;k<=t;k++){
        cin>>n>>m;
        e.clear();
        memset(edget,0,sizeof(edget));
        for(int i=0;i<m;i++){
            cin>>u>>v>>w;
            Edge data;
            data.u = u;
            data.v = v;
            data.w = w;
            e.push_back(data);
        }
        printf("Case #%d : ", k);
        int res = krushkal(n);
        if(res == -1) cout<<"No way"<<endl;
        else{
            mn = INF;
            for(int j=0;j<et;j++){
                ms(n);
                int ct=0,sum = 0;

                for(int i=0;i<(int) e.size();i++){
                    if(edget[j] != i){
                        int u = fs(e[i].u);
                        int v = fs(e[i].v);

                        if(u != v){
                            p[u] = v;
                            ct++;
                            sum += e[i].w;
                            if(ct == n-1) break;
                        }
                    }
                }
                if(ct == n-1 && mn>sum) mn = sum;
            }
            if(mn == INF) cout<<"No second way"<<endl;
            else cout<<mn<<endl;
        }
    }
    return 0;
}
