#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,r,a[10000],b[10000],x,y;
    cin>>t;
    j=0;
    while(t--)
    {
        x=y=0;
        j++;
        cin>>r;
        for(i=0;i<r;i++)
            cin>>a[i];
        for(i=1;i<r;i++)
        {
            if(a[i]>a[i-1]){
                x++;
            }
            else if(a[i]<a[i-1])
                y++;
        }
        printf("Case %d: %d %d\n",j,x,y);
    }
    return 0;
}
