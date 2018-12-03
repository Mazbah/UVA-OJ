#include<bits/stdc++.h>
using namespace std;

int price[1010],weight[1010],W,n;
int c[1010][1010];

int knapsack()
{
    int i,w;
    for (i=0;i<=n ;i++) c[i][0] = 0;
    for (w=0;w<=W;w++) c[0][w] = 0;

        for(i=1;i<=n;i++){
            for(w=0;w<=W;w++){
                if(weight[i] <= w)
                    c[i][w] = max(price[i] + c[i-1][w - weight[i]], c[i-1][w]);
                else
                    c[i][w] = c[i-1][w];
            }
    }

    return c[n][W];
}
int main()
{
    int k,t,j,i,g,x,sum;
    cin>>t;
    while(t--){
        sum =0;
        cin>>n;
        for(i=1;i<=n;i++)
            cin>>price[i]>>weight[i];

        cin>>g;
        while(g--){
            cin>>W;
            x = knapsack();
            sum += x;
        }
        cout<<sum<<endl;
    }
    return 0;
}
