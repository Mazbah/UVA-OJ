#include<bits/stdc++.h>
using namespace std;
#define inf 100000005

int dis[100],zz;
vector<int> vt[105],cost[105];

void bfs(int st)
{
    queue<int> q;
    q.push(st);
    dis[st] = 0;
    int p,s,xx,temp;
    while(!q.empty()){
        p = q.front();
        q.pop();
        s = vt[p].size();
        for(int i=0;i<s;i++){
            xx = vt[p][i];
            cout<<"vt["<<p<<"]["<<i<<"] = xx = "<<xx <<" dis["<<xx<<" ]= " <<dis[xx]<< " c[xx] = " <<cost[p][i] <<endl;
            temp = max(dis[p],cost[p][i]);
            if(temp<dis[xx]){
                dis[xx] = temp;
                q.push(xx);
            }
        }
    }
}

int main()
{
    int c,s,q,u,v,w,cs=1,tt;
    while(1){
        cin>>c>>s>>q;
        if(c==0 && s==0 &&q==0) break;
        if(cs!=1) cout<<endl;
        while(s--){
            cin>>u>>v>>w;
            vt[u].push_back(v);
            vt[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        cout<<"Case #"<<cs++<<endl;
        while(q--){
            for(int i=1;i<=c;i++)
                dis[i] = inf;
            cin>>tt>>zz;
            bfs(tt);
            if(dis[zz] == inf)
                cout<<"no path"<<endl;
            else
                cout<<dis[zz]<<endl;
        }
        for(int i=0;i<=c;i++){
            vt[i].clear();
            cost[i].clear();
        }
    }
    return 0;
}
