#include<bits/stdc++.h>
#define N 105
using namespace std;

int n;
bool Free[N];
vector<int> a[N];

int bfs(int u)
{
    queue<int> q;
    q.push(u);
    Free[u] = false;
    int i,v,dem = 0;
    while(!q.empty()){
        u = q.front();
        for(i=0;i<a[u].size();i++){
            v = a[u][i];
            if(Free[v]){
                q.push(v);
                dem++;
                Free[v] = false;
            }
        }
        q.pop();
    }
    return dem;
}
int main()
{
    int i,t,m;
    while(scanf("%d",&n)&&n){
        for(i=1;i<=n;i++){
            a[i].clear();
            cin>>t;
            while(t--){
                cin>>m;
                a[i].push_back(m);
            }
        }
        int u,ans,temp;
        u=-1,ans=-1;
        for(i=1;i<=n;i++){
            memset(Free,true,n+2);
            temp = bfs(i);
            if(temp>ans){
                ans = temp;
                u = i;
            }
        }
        cout<<u<<endl;
    }
    return 0;
}
