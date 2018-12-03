#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main()
{
    int v,e,V,i,j;
    vector<vi>adjlist;
    while(scanf("%d",&V)==1){
        if(V==0) break;

        adjlist.assign(V,vi());
        cin>>e;

        for(int k=0;k<e;k++){
            cin>>i>>j;
            adjlist[i].push_back(j);
            adjlist[j].push_back(i);
        }
        queue<int> q;
        q.push(0);
        vi color(V,100);
        color[0] = 0;
        bool is = true;
        while(!q.empty() && is){
            int u = q.front();
            q.pop();
            for(int k = 0;k<(int)adjlist[u].size();k++){
                int v = adjlist[u][k];
                if(color[v] == 100){
                    color[v] = 1 - color[u];
                    q.push(v);
                }
                else if(color[v] == color[u]){
                    is = false;
                    break;
                }
            }
        }
        if(is) cout<<"BICOLORABLE."<<endl;
        else cout<<"NOT BICOLORABLE."<<endl;
    }
    return 0;
}
