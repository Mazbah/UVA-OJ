#include<bits/stdc++.h>
#define max 10001
using namespace std;

vector<int> g[max];
int total;
bool visit[max];

void dfs(int u)
{
    total++;
    visit[u] = true;
    for(int v =0;v<g[u].size();v++){
        if(!visit[g[u][v]])
            dfs(g[u][v]);
    }
}

int main()
{
    int t,n,m,l,x,y,z;
    cin>>t;
    while(t--){
        cin>>n>>m>>l;
        while(m--){
            cin>>x>>y;
            g[x].push_back(y);
        }
        while(l--){
            cin>>z;
            if(!visit[z])
                dfs(z);
        }
        cout<<total<<endl;
        total = 0;
        fill(visit,visit+max,false);
        for(int i=0;i<n;i++)
            g[i].clear();
    }
    return 0;
}
