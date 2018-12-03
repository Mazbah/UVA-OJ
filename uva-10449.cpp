#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tc=0;
    while(cin>>n)
    {
        int busy[n+1];
        for(int i=1;i<=n;i++){
            cin>>busy[i];
        }

        int r;
        cin>>r;
        int u[r],v[r],w[r];
        for(int i=0;i<r;i++){
            cin>>u[i]>>v[i];
            w[i] = (busy[v[i]] - busy[u[i]]) * (busy[v[i]] - busy[u[i]]) * (busy[v[i]] - busy[u[i]]);
        }

        bool bm;
        long long dist[n+1];

        fill(dist,dist+n+1,INT_MAX);
        dist[1] = 0;

        for(int j = 0;j<n;j++){
            bm = false;
            for(int i=0;i<r;i++){
                if(dist[u[i]] + w[i] < dist[v[i]] && dist[u[i]] != INT_MAX){
                    dist[v[i]] = dist[u[i]] + w[i];
                    bm = true;
                }
            }
            if(!bm) break;
        }

        for(int i=0;i<r;i++){
                if(dist[u[i]] + w[i] < dist[v[i]] && dist[u[i]] != INT_MAX){
                        dist[v[i]] = -INT_MIN;
                }
        }

        printf("Set #%d\n", ++tc);

        int q,t;
        cin>>q;
        while(q--){
            cin>>t;

            if(dist[t]<3 || dist[t] == INT_MAX)
                cout<<"?"<<endl;
            else
                cout<<dist[t]<<endl;
        }
    }
    return 0;
}
