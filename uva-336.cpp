#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int nc,i,pair1,pair2,node,ttl,num,l,x,diff,cs=1;

    vector<long long> v[100000];
    map<long long,int> mp;
    map<long long,int> visit;
    map<long long,int> dif;
    queue<long long> q;
    while(cin>>nc)
    {
        if(nc == 0 ) return 0;
        diff = 0;
        dif.clear();
        for(i=0;i<=99990;i++)
        v[i].clear();
        mp.clear();
        for(i=0;i<nc;i++){
            cin>>pair1>>pair2;
            v[pair1].push_back(pair2);
            v[pair2].push_back(pair1);
            if(dif[pair1] != 1){
                dif[pair1]=1;
                diff++;
            }
            if(dif[pair2] != 1){
                dif[pair2]=1;
                diff++;
            }
        }
        while(cin>>node>>ttl){
            if(node==0 && ttl== 0)
                break;
            num = 0;
            visit.clear();
            visit[node] = 1;
            mp[node] = 0;
            q.push(node);
            while(!q.empty()){
                x = q.front();
                q.pop();
                l = v[x].size();
                for(i=0;i<l;i++){
                    if(visit[v[x][i]] != 1){
                        mp[v[x][i]] = mp[x]+1;
                        if(mp[v[x][i]] > ttl)
                            break;
                        num++;
                        visit[v[x][i]] = 1;
                        q.push(v[x][i]);
                    }
                }
            }
            printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",cs,diff-num-1,node,ttl);
            cs++;
        }
    }
    return 0;
}
