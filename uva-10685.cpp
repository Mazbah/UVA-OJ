#include<bits/stdc++.h>
using namespace std;
#define MAX 5005

int p[MAX],ara[MAX];

void ms(int n)
{
    for(int i=0;i<=n;i++)
        p[i] = i;
}

int fs(int r)
{
    if(p[r] == r) return r;
    return p[r]=fs(p[r]);
}

void check(int a,int b)
{
    int u,v;
    u = fs(a);
    v = fs(b);
    if( u != v){
        p[v] = u;
        ara[u] += ara[v];
    }
}

int main()
{
    map<string,int> mp;
    string s1,s2,s3;
    int n,e,i,k;
    while(scanf("%d%d",&n,&e)==2)
    {
        if(n==0 && e==0) break;
        ms(n);
        for(i=0;i<n;i++)
            ara[i] = 1;

        for(i=0;i<n;i++){
            cin>>s1;
            mp[s1] = i;
        }

        for(k=0;k<e;k++){
            cin>>s2>>s3;
            int x = mp[s2];
            int y = mp[s3];
            check(x,y);
        }

        int mx = 0;
        for(k=0;k<n;k++){
            if(ara[k] > mx)
                mx = ara[k];
        }
        cout<<mx<<endl;
    }
    return 0;
}


