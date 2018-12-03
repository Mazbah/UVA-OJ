#include<bits/stdc++.h>
using namespace std;
#define N 500

typedef pair<int,int> PI;
inline int ms(int n);
inline int fs(int r);
inline void Union(int a,int b);
inline double gdis(PI &a,PI &b);

struct Edge
{
    int a,b;
    double dis;
    bool operator<(const Edge &c) const{
        return dis<c.dis;
    }
}e[125000];
int p[N];

int ms(int n)
{
    for(int i=0;i<=n;i++)
        p[i] = i;
}

int fs(int r)
{
    if(p[r] == r) return r;
    return p[r] = fs(p[r]);
}

void Union(int a,int b)
{
    p[fs(a)] = fs(b);
}

double kruskal(int V,int E,int S)
{
    int i,j;
    ms(V);
    sort(e,e+E);
    double D=0;
    for(i=1,j=0;i< V-(S-1) && j<E;i++)
    {
        while(fs(e[i].a) == fs(e[i].b))
            j++;
            Union(e[j].a,e[j].b);
            D = e[j].dis;
            j++;
    }
    return D;
}

double gdis(PI &a,PI &b)
{
    return sqrt((a.first - b.first)*(a.first - b.first) + (a.second - b.second)*(a.second - b.second));
}
int main()
{
    PI pi[N];
    int t,n,k,s,p,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&s,&p);
        for(i=0;i<p;i++){
            scanf("%d%d",&pi[i].first,&pi[i].second);
        }
        int k=0;
        for(i=0;i<p;i++){
            for(int j=i+1;j<p;j++){
                e[k].a = i;
                e[k].b = j;
                e[k++].dis = gdis(pi[i],pi[j]);
            }
        }
        printf("%.2lf\n", kruskal(p, k, s));
    }
    return 0;
}



